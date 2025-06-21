/* 
 Exercise 1.11: Write a program that prompts the user for two integers. Print each 
 number in the range speciﬁed by those two integers.
*/

#include <iostream>

int main()
{
    std::cout << "Enter two integer numbers :" << std::endl;
    int num1 {}, num2 {}, min {}, max{};
    std::cin >> num1 >> num2;

    min = std::min(num1,num2); // assigns lower number to min
    max = std::max(num1,num2); // assigns greater number to max

    std::cout << "Numbers from " << min << " to " << max << " are as: " << std::endl;
    while (min <= max)
    {
        std::cout << min <<", ";
        ++min;
    }

    return 0;
} 

/*
 Enter two integer numbers :
 20
 10
 Numbers from 10 to 20 are as: 
 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
*/