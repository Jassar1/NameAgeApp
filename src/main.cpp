
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 0) {
        cout << "Invalid age!" << endl;
        return 1;
    }

    cout << "\nWelcome, " << name << "!" << endl;
    cout << "Your age is " << age << " years." << endl;

    return 0;
}
