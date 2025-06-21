// Sum of numbers from 1 through 10 using while statement

#include <iostream>

int main()
{
    int sum {};
    for(int num1 {1}; num1 <= 10; ++num1) // keeps executing till the condition is true!
    {
        sum += num1;
    }
    std::cout << "Sum of 1 to 10 (inclusive) is: " << sum << std::endl;

    return 0;
}

// Output: Sum of 1 to 10 (inclusive) is: 55