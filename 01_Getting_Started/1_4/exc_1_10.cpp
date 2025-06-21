/*
 Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a 
 decrement operator (--) that subtracts 1. Use the decrement operator to write a while 
 that prints the numbers from ten down to zero
*/

#include <iostream>

int main()
{
    int num1 {10};
    while(num1>=0)
    {
        std::cout << num1 << std::endl;
        --num1;
    }

    return 0;
}

/*
 Output:
 10
 9 
 8 
 7 
 6 
 5 
 4 
 3
 2
 1
 0
*/
