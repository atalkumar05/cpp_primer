/*
 Exercise 1.23: Write a program that reads several transactions and counts how many 
 transactions occur for each ISBN.
 Exercise 1.24: Test the previous program by giving multiple transactions representing 
 multiple ISBNs. The records for each ISBN should be grouped together.
*/


#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "Enter the transaction of books(ISBN, Units Sold, Price) (in batches)" << std::endl;
    std::cout << "Press EOF(ctrl+z followed by enter) to end: " << std::endl;

    Sales_item curr_book, book;

    if (std::cin >> curr_book)
    {
        int book_count {1};
        while (std::cin >> book)
        {
            if (book.isbn() == curr_book.isbn())
            {
                ++book_count;
            }
            else
            {
                std::cout << "Book : " << curr_book.isbn() << " occurred: " << book_count 
                          << " times!" << std::endl;
                curr_book = book;
                book_count = 1;
            }
        } // while end here

        std::cout << "Book : " << curr_book.isbn() << " occurred: " << book_count 
                  << " times!" << std::endl;
    }
    else
    {
        std::cerr << "Not entered any book transaction!" << std::endl;
    }

    return 0;
}

/*
 Enter the transaction of books(ISBN, Units Sold, Price) (in batches)
 Press EOF(ctrl+z followed by enter) to end: 
 978-0-123456-47-2 2 45.00  
 978-0-123456-47-2 1 45.00  
 978-0-123456-47-2 3 45.00  
 978-0-987654-32-1 5 60.00
 Book : 978-0-123456-47-2 occurred: 3 times!
 978-0-987654-32-1 2 60.00
 978-0-222333-11-9 1 30.00 ^Z
 Book : 978-0-987654-32-1 occurred: 2 times!
 ^Z
 Book : 978-0-222333-11-9 occurred: 1 times!
*/