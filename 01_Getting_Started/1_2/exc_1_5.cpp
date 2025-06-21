/*
 Exercise 1.5: We wrote the output in one large statement. Rewrite the program to use 
 a separate statement to print each operand.
*/

#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int num1 {}, num2 {};
    std::cin >> num1 >> num2;

    // before: std::cout << "Addition of " << num1 << " and " << num2 << " is: " << num1 + num2 << std::endl;

    std::cout << "Addition of ";
    std::cout << num1;
    std::cout << " and ";
    std::cout << num2;
    std::cout << " is: ";
    std::cout << num1 + num2;
    std::cout << std::endl;

    return 0;
}

/*
 Enter two numbers:
 23
 2
 Addition of 23 and 2 is: 25
*/