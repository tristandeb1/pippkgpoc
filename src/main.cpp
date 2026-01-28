#include <iostream>
#include <azure/core/url.hpp>

using namespace std;

int main() {
    Azure::Core::Url url("https://www.example.com/path/to/something.html");
    cout << "Scheme: " << url.GetScheme() << "\n";
    cout << "Host: " << url.GetHost() << "\n";
    cout << "Port: " << url.GetPort() << "\n";
    cout << "Path: " << url.GetPath() << "\n";
    return 0;
}
