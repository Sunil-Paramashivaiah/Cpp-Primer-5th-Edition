/*Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers.*/

#include <iostream>

int main()
{
    int num1 = 0, num2 = 0;
    
    std::cout << " Enter the two integer numbers where first number"
              << "should be less thn the second to print each number in"
              << "the range specified by those two integers" << std::endl;
    std::cin >> num1 >> num2;
    
    if (num1 > num2) {
        std::cout << "Error in input as first number is gtreater thn 2nd" 
                  << std::endl;
        return -1;
    }

    std::cout << "Printing each number in the range specified" << std::endl;
    while (num1 <= num2) {
        std::cout << num1 << std::endl;
        num1++;
    }

    return 0;
}
