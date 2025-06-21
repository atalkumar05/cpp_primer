// program to add two numbers in c++

#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int num1 {}, num2 {};
    std::cin >> num1 >> num2;
    std::cout << "Addition of " << num1 << " and " << num2 << " is: " << num1 + num2 << std::endl;

    return 0;
}

/*
 Output: Enter two numbers:
 15
 85
 Addition of 15 and 85 is: 100
*/