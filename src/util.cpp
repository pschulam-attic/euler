#include <cmath>
#include "util.h"

bool is_prime(int n)
{
    if (n < 2)
        return false;

    switch (n) {
    case 2:
        return true;
    case 3:
        return true;
    default:
        break;
    }

    if (n % 2 == 0)
        return false;

    int square = floor(sqrt(n));
    for (int i = 3; i <= square; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}


