#include <iostream>
#include "util.h"

using namespace std;

int main() {
    int n = 1;
    int num_primes = 0;

    do {
        n++;
        num_primes += is_prime(n); 
    } while(num_primes < 10001);

    cout << n << endl;
}
