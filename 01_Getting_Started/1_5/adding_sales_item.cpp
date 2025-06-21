// Program to add two Sales_item objects

#include <iostream>
#include "Sales_item.h"


int main()
{
    std::cout << "Enter the book1 transaction(ISBN, Units Sold, Price): " << std::endl;
    Sales_item book1, book2; // declared object of class Sales_item
    // read ISBN, number of copies sold, and sales price of book1
    std::cin >> book1;
    std::cout << "Enter the book2 transaction(ISBN(same as book1), Units Sold, Price): " << std::endl;
    // read ISBN, number of copies sold, and sales price of book2
    std::cin >> book2;

    // write ISBN, number of copies sold, total revenue, and average price 
    std::cout << "Book transaction(ISBN, Units Sold, Revenue, Average Price): " << book1 + book2 <<std::endl;

    return 0;
}

/*
 Enter the book1 transaction(ISBN, Units Sold, Price): 
 123-ABC-$%6 8 100
 Enter the book2 transaction(ISBN(same as book1), Units Sold, Price): 
 123-ABC-$%6 2 200
 Book transaction(ISBN, Units Sold, Revenue, Average Price): 123-ABC-$%6 10 1200 120
*/