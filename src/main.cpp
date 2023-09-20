#include "include/functions.h"
#include <iostream>

/*
2520 is the smallest number that can be divided by each of the numbers 1 through 10 without a remainder.
What is the smallest number that can be divided by each of the numbers from 1 through 20 without a remainder?

So the number must be evenly divisible by all numbers 1 - 20.
*/

int main() {
    std::cout << "The smallest number that can be divided by each of the numbers from 1 through 20 without a remainder: " << '\n';
    std::cout << func::smallest_div_in_range(1, 20) << '\n';

    return 0;
}