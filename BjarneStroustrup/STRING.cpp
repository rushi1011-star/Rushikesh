#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);  // Read full line including spaces

    cout << "Hello, " << name << "!" << endl;

    return 0;
}
