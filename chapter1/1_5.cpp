/*We wrote the output in one large statement. Rewrite the
program to use a separate statement to print each operand.*/


#include <iostream>

int main() 
{
    std::cout << "Enter two numbers:"; 
    std::cout << std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1;
    std::cin >> num2;
    std::cout << "The sum of "; 
    std::cout << num1;
    std::cout << " and "; 
    std::cout << num2; 
    std::cout << " is ";
    std::cout << num1 + num2; 
    std::cout << std::endl;
    return 0;
}
