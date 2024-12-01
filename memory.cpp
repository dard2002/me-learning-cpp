#include <iostream>
#include <string>

using namespace std;

// Don't save the memory address, the address should change when it goes out of scope
void secondFunction(string name) {
    cout << name << endl;
    cout << &name << endl;
}

// Get address stored via pointer variable, also dereference the pointer to get the string "Dylan"
void thirdFunction(string* name) {
    cout << *name << endl;
    cout << name << endl;
}

int main() {
    string name = "Dylan";
    string* pointToName = &name;

    cout << &name << endl;

    secondFunction(name);
    thirdFunction(pointToName);

    delete pointToName;
}

