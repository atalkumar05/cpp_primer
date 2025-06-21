/*
 Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p. 13) that 
 printed a range of numbers so that it handles input in which the ﬁrst number is smaller 
 than the second.
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
        if (min == max) //Checks for last digit to avoid adding "," at end
        {
            std::cout << min;
            return 0;
        }
        std::cout << min <<", ";
        ++min;
    }

    return 0;
}

/*
 Enter two integer numbers :
 10
 20
 Numbers from 10 to 20 are as: 
 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
*/