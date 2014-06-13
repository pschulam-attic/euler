#include <cmath>
#include <iostream>

using namespace std;

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

int main()
{
    long int number = 600851475143; 
    long int square = floor(sqrt(number));
    int largest_prime_factor = 0;

    for (int i = 2; i <= square; ++i) {
        if (number % i == 0 && is_prime(i))
            largest_prime_factor = i;
    }
    
    cout << largest_prime_factor << endl;
}
