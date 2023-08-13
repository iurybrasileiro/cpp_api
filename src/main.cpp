#include "./server.cpp"

int main() {
  Server server;

  server.port = 3333;
  server.start();
  
  return EXIT_SUCCESS;
}