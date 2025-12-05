#include <iostream>
#include <string>
using namespace std;

void greet() {
    cout << "Welcome to Git version control!" << endl;
}

bool login(string username, string password) {
    if (username == "admin" && password == "123456") {
        cout << "Login successful!" << endl;
        return true;
    }
    cout << "Login failed!" << endl;
    return false;
}

int main() {
    cout << "Hello, Git!" << endl;
    greet();
    login("admin", "123456");
    return 0;
}

