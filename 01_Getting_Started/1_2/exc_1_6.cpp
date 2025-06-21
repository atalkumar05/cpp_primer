/*
 Exercise 1.6: Explain whether the following program fragment is legal.
 std::cout << "The sum of " << v1;
 << " and " << v2;
 << " is " << v1 + v2 << std::endl;
 If the program is legal, what does it do? If the program is not legal, why not? How 
 would you ﬁx it?
*/

/*
 The program isn't legal, since the std::cout isn't used in two statements
*/

// Fixed as :

#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 {}, v2 {};
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;;

    return 0;
}

/*
 Output: Enter two numbers:
 2
 5
 The sum of 2 and 5 is 7
*/