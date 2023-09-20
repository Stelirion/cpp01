#include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "String adress: " << &str << std::endl;
    std::cout << "Pointer: " << ptr << std::endl;
    std::cout << "Reference: " << &ref << std::endl;

    std::cout << "string content: " << str << std::endl;
    std::cout << "Pointer content: " << *ptr << std::endl;
    std::cout << "Reference content: " << ref << std::endl;

}
