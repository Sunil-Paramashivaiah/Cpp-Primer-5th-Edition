/* What does the following for loop do? what is the final value of Sum?*/


#include <iostream>

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << "Sum is " << sum << std::endl;
    return 0;
}

/* The above for loop fragment sums up numbers from -100 to 100 which results in zero */
