/*
 *Exercise 1.4: Our program used the addition operator, +, to add two numbers. Write 
  a program that uses the multiplication operator, *, to print the product instead.
*/

#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int num1 {}, num2 {};
    std::cin >> num1 >> num2;
    std::cout << "The multiplication of provided numbers is:" << num1*num2 << std::endl;

    return 0;
}

/*
Output: Enter two numbers:
2
99
The multiplication of provided numbers is:198
*/