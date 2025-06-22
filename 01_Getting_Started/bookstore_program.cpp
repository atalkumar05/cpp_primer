/*
 Exercise 1.25: Using the Sales_item.hheader from the Web site, compile
 and execute the bookstore program presented in this section.
*/

// Program with improvements!

#include <iostream>
#include "Sales_item.h" // contains "Sales_item" Class and definitions -> provided by primer" authors

int main()
{
    Sales_item curr_item,item;

    std::cout << "Enter the Book transactions with grouped ISBN (ISBN, UNITS SOLD, PRICE)" << std::endl;
    std::cout << "(Press \"EOF(ctrl+z)\" followed by \"Enter\" to stop! ) :" << std::endl;

    if (std::cin >> curr_item)
    {
      int item_count {1}; //to count the number of time each item encountered

      while (std::cin >> item)
      {
        if (item.isbn() == curr_item.isbn()) // to check if next item matches the current item
        {
            ++item_count;
            curr_item += item; //holds the total transactions for the items with same ISBN
        }
        else
        {
            std::cout << "Book with ISBN :" << curr_item.isbn() << " occurred " << item_count << " times," << std::endl;
            std::cout << "Total transactions (ISBN,UNITS SOLD,REVENUE,AVG. PRICE) :" << curr_item << std::endl;

            curr_item = item;
            item_count = 1;
        }
      } //while ends here!
      // going to write the last group of item
      std::cout << "Book with ISBN :" << curr_item.isbn() << " occurred " << item_count << " times," << std::endl;
      std::cout << "Total transactions (ISBN, UNITS SOLD, REVENUE, AVG. PRICE) :" << curr_item << std::endl;
      return 0;
    } //outer if ends here!
    else
    {
        std::cerr << "No transaction entered?!" << std::endl;
        return -1;
    }
} 

/*
 Output: 
 Enter the Book transactions with grouped ISBN (ISBN, UNITS SOLD, PRICE)
 (Press "EOF(ctrl+z)" followed by "Enter" to stop! ) :
 978-0-123456-47-2 2 45.00  978-0-123456-47-2 1 45.00  978-0-123456-47-2 3 45.00 
  978-0-987654-32-1 5 60.00  978-0-987654-32-1 2 60.00  978-0-222333-11-9 1 30.00 ^Z
 Book with ISBN :978-0-123456-47-2 occurred 3 times,
 Total transactions (ISBN, UNITS SOLD, REVENUE, AVG. PRICE) :978-0-123456-47-2 6 270 45
 Book with ISBN :978-0-987654-32-1 occurred 2 times,
 Total transactions (ISBN, UNITS SOLD, REVENUE, AVG. PRICE) :978-0-987654-32-1 7 420 60
 Book with ISBN :978-0-222333-11-9 occurred 1 times,
 Total transactions (ISBN, UNITS SOLD, REVENUE, AVG. PRICE) :978-0-222333-11-9 1 30 30
*/
