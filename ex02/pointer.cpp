#include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String adress: " << &str << std::endl;
    std::cout << "Pointer: " << stringPTR << std::endl;
    std::cout << "Reference: " << &stringREF << std::endl;

    std::cout << "string content: " << str << std::endl;
    std::cout << "Pointer content: " << *stringPTR << std::endl;
    std::cout << "Reference content: " << stringREF << std::endl;

}
