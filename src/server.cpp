#include <httplib.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

class Server {
  public:
    int port;

  public:
    void routes(httplib::Server& server) {
      server.Get("/", [](const httplib::Request &, httplib::Response &response) {
        json data = {
          { "message", "Hello world!" }
        };

        std::string parsed_data = data.dump();

        response.set_content(parsed_data, "application/json");
      });
    }

    void start() {
      httplib::Server server;

      Server::routes(server);

      server.listen("0.0.0.0", Server::port);
    }
};
