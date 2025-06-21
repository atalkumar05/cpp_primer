/*
 Use an if to write a program to count how many consecutive times 
 each distinct value appears in the input
*/

#include <iostream>

int main()
{
    int curr_value {}, value {};

    std::cout << "Enter the numbers (in batches only!)" << std::endl;
    std::cout << "Press EOF(ctrl+z followed by enter) to end : " << std::endl;

    if (std::cin >> curr_value)
    {
        int count {1};
        while (std::cin >> value)
        {
            if (value == curr_value)
            {
                ++count;
            }
            else
            {
                std::cout << curr_value << " appeared " << count << " times!" << std::endl;
                curr_value = value;
                count = 1;
            }
        } // while ends here

        std::cout << curr_value << " appeared " << count << " times!" << std::endl; // to print last batch of numbers
    }
    else
    {
        std::cerr << "No integer is added?!" << std::endl;
    }

    return 0;
}

/*
 Enter the numbers (in batches only!)
 Press EOF(ctrl+z followed by enter) to end :
 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5 ^Z
 1 appeared 1 times!
 2 appeared 2 times!
 3 appeared 3 times!
 4 appeared 4 times!
 5 appeared 5 times!
*/