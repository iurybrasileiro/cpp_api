#include <httplib.h>

class Server {
  public:
    int port;

  public:
    void routes(httplib::Server& server) {
      server.Get("/hi", [](const httplib::Request &, httplib::Response &res) {
        res.set_content("Hello World!", "text/plain");
      });
    }

    void start() {
      httplib::Server server;

      Server::routes(server);

      server.listen("0.0.0.0", Server::port);
    }
};
