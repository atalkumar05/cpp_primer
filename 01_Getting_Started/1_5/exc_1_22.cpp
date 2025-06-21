/*
 Exercise 1.22: Write a program that reads several transactions for the same ISBN. 
 Write the sum of all the transactions that were read.
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "Enter the transactions of book(ISBN,Units Sold,Price)" << std::endl;
    std::cout << "Enter the EOF(ctrl+z followed by enter) to end : " << std::endl;

    Sales_item book_sum, book1;
    if (std::cin >> book_sum)
    {
        while ( std::cin >> book1)
        {
            book_sum += book1;
        }
        std::cout << "Sum of transaction(ISBN, Units Sold, Revenue, Average Price) is: "
               << book_sum << std::endl;
    }
    else
    {
        std::cerr << "Not entered a book transaction?!" << std::endl;
    }

    return 0;
}

/*
 Enter the transactions of book(ISBN,Units Sold,Price)
 Enter the EOF(ctrl+z followed by enter) to end :
 123-abc 2 100
 123-abc 8 100
 123-abc 10 200
 123-abc 5 300
 ^Z
 Sum of transaction(ISBN, Units Sold, Revenue, Average Price) is: 123-abc 25 4500 180
*/