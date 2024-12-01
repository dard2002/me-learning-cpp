#include <iostream>
#include <memory>
#include <string>

struct Test {
    std::string name;
    int age;

    Test(std::string _name, int _age) : name{_name}, age{_age} {}
};

int main() {
    std::unique_ptr<Test> testPtr = std::make_unique<Test>("Dylan", 22);

    std::cout << &testPtr << std::endl;
    std::cout << testPtr->name << std::endl;
    std::cout << testPtr->age << std::endl;

    testPtr->name = "Bob";

    std::cout << &testPtr << std::endl;
    std::cout << testPtr->name << std::endl;

    return 0;
}