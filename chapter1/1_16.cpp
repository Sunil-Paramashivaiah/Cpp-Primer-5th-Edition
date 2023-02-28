/*Write your own version of a program that prints the sum of
a set of integers read from cin.*/

#include <iostream>

int main()
{
    int sum = 0;
    std::cout << "Enter the numbers to be added: " << std::endl;
    int input_number = 0;
    while (std::cin >> input_number)
    {
       sum += input_number;
    }
    std::cout << "Sum of all the input numbers =  " << sum << std::endl;

    return 0;
}
