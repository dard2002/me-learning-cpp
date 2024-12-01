#include <iostream>
#include <memory>
#include <string>

struct my_struct {
    std::string name;

    my_struct(std::string _name): name{_name} { }
};

void passStructs(const std::unique_ptr<my_struct>& passedStruct) {
    std::cout << passedStruct->name << std::endl;
    std::cout << &passedStruct << std::endl;
}

int main() {
    std::unique_ptr<int> numPtr = std::make_unique<int> (5);

    std::cout << &numPtr << std::endl; // Memory address of numPtr
    std::cout << *numPtr << std::endl; // Value of numPtr

    std::unique_ptr<my_struct> my_structPtr = std::make_unique<my_struct>("Dylan Unique");
    // WILL NOT WORK AS THIS IS A UNIQUE POINTER std::unique_ptr<my_struct> my_structPtr2 = my_structPtr;

    std::cout << my_structPtr->name << std::endl;
    std::cout << &my_structPtr << std::endl;

    std::shared_ptr<my_struct> my_structSPtr = std::make_shared<my_struct>("Dylan Shared");
    std::shared_ptr<my_struct> my_structSPtr2 = my_structSPtr;

    std::cout << my_structSPtr->name << std::endl;
    std::cout << &my_structSPtr << std::endl;

    std::cout << my_structSPtr2->name << std::endl;
    std::cout << &my_structSPtr2 << std::endl;

    passStructs(my_structPtr);

    return 0;
}