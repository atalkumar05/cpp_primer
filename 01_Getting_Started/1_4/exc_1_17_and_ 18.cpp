/*
 Exercise 1.17: What happens in the program presented in this section if the input values
 are all equal? What if there are no duplicated values?
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
 Output: (When all inputs are equal) :
 1 1 1 1 1 1 ^Z
 1 appeared 6 times!
 ---------------------------------------------
 (when there is no duplicate value) :
 1 2 3 4 5 ^Z
 1 appeared 1 times!
 2 appeared 1 times!
 3 appeared 1 times!
 4 appeared 1 times!
 5 appeared 1 times!
*/
