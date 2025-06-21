/*
 Exercise 1.16: Write your own version of a program that prints the sum of a set of 
 integers read from cin.
*/

#include <iostream>

int main()
{
    int num1 {}, sum{};

    std::cout << "Keep entering numbers to be added and press EOF(windows: ctrl+z followed by enter) to end: "
              << std::endl;
    while (std::cin >> num1) // Condition will be true until EOF or any other type of data is entered than int
    {
        sum += num1;
    }
    std::cout << "The sum of entered numbers is: " << sum << std::endl;

    return 0;
}

/*
 Output: Keep entering numbers to be added and press EOF(windows: ctrl+z followed by enter) to end: 
 1 2 3 4 5 6 7 8 9 10 ^Z
 The sum of entered numbers is: 55
*/