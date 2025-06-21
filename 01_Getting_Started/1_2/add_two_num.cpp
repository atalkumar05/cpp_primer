// program to add two numbers in c++

#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int num1 {}, num2 {};
    std::cin >> num1 >> num2;
    std::cout << "Addition of the provided numbers is:" << num1 + num2 << std::endl;

    return 0;
}