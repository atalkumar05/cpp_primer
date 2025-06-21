// Reading and Writing Sales_items

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