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
    std::cout << "The multiplication of " << num1 << " and " << num2 << " is:" << num1*num2 << std::endl;

    return 0;
}

/*
 Output: Enter two numbers:
 2
 99
 The multiplication of 2 and 99 is:198
*/