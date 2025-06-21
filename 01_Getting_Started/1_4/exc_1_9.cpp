// Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.

#include <iostream>

int main()
{
    int num1 {50}, sum {};
    while(num1 <= 100)
    {
        sum += num1;
        ++num1;
    }
    std::cout << "The sum of numbers from 50 to 100 (inclusive) is: " << sum << std::endl;

    return 0;
}

// Output: The sum of numbers from 50 to 100 (inclusive) is: 3825