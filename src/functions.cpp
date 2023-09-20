#include "include/functions.h"
#include <numeric>
#include <vector>
#include <iostream>

namespace func {
    int smallest_div_in_range(int start, int stop) {
        std::vector<int> multiples;
        multiples.push_back(std::lcm(start, 2));

        for (int i = 3; i < stop + 1; i++) {
            multiples.push_back(std::lcm(i, multiples.back()));
        }

        return multiples.back();
    }
}