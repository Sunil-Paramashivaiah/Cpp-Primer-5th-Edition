/*In addition to the ++ operator that adds 1 to its operand,
there is a decrement operator (--) that subtracts 1. Use the decrement
operator to write a while that prints the numbers from ten down to zero.*/

#include <iostream>

int main()
{
    int num = 10;
    
    std::cout << " Print the numbers from ten down to zero" << std::endl;
    while (num >= 0) {
        std::cout << num << std::endl;
        num--;
    }
    return 0;
}
