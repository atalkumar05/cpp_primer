/*
 Exercise 1.20: http://www.informit.com/title/0321714113contains a copy 
 of Sales_item.h in the Chapter 1 code directory. Copy that ﬁle to your working 
 directory. Use it to write a program that reads a set of book sales transactions, writing 
 each transaction to the standard output
*/

#include <iostream>
#include "Sales_item.h"


int main()
{
    std::cout << "Enter the book transaction(ISBN, Units Sold, Price): " << std::endl;

    Sales_item book1; // declared object of class Sales_item

    // read ISBN, number of copies sold, and sales price
    std::cin >> book1;

    // write ISBN, number of copies sold, total revenue, and average price
    std::cout << "Book transactions(ISBN, Units Sold, Revenue, Average Price): " << book1 <<std::endl;

    return 0;
}

/*
 Enter the book transaction(ISBN, Units Sold, Price): 
 123-X-567 8 100
 Book transactions(ISBN, Units Sold, Revenue, Average Price): 123-X-567 8 800 100
*/