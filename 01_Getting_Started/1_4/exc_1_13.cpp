// Exercise 1.13: Rewrite the ﬁrst two exercises from § 1.4.1 (p. 13) using for loops
//i.e  Exercise 1.9(1): Write a program that uses a for to sum the numbers from 50 to 100
/*
 Exercise 1.10(1): In addition to the ++ operator that adds 1 to its operand, there is a 
 decrement operator (--) that subtracts 1. Use the decrement operator to write a while
 that prints the numbers from ten down to zero.
  
*/

#include <iostream>

int main()
{
    int sum {};
    for (int i {50}; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << "(Exc 1.9 using for loop)" << std::endl;
    std::cout << "Sum of numbers from 50 to 100 is: " << sum << std::endl;
    
    std::cout << "---------------------------------------------------" << std::endl;

    std::cout << "(Exc 1.10 using for loop)" << std::endl;
    for (int num {10}; num >= 0; --num)
    {
        if(num == 0) // Check for last digit to avoid adding "," at end
        {
            std::cout << num << std::endl;
            return 0;
        }
        std::cout << num << ", ";
    }

    return 0;
}

/*
 (Exc 1.9 using for loop)
 Sum of numbers from 50 to 100 is: 3825
 ---------------------------------------------------
 (Exc 1.10 using for loop)
 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
*/