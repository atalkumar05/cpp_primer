// Program to add two book's transaction if the ISBN is same 

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1, book2;
    std::cout << "Enter two book transaction (with same ISBN): " << std::endl;
    std::cin >> book1 >> book2;

    if(book1.isbn() == book2.isbn())
    {
        std::cout << "Sum of transaction of books is: " << book1 + book2 << std::endl;
    }
    else
    {
        std::cerr << "Enter the same ISBN for both books!" << std::endl;
    }

    return 0;
}

/*
 Output: Enter two book transaction (with same ISBN): 
 123-abc 12 200
 12-abc 8 800
 Enter the same ISBN for both books!
*/
/*
 Enter two book transaction (with same ISBN):
 123-abc 12 200
 123-abc 8 800 
 Sum of transaction of books is: 123-abc 20 8800 440
*/