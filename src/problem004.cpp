#include <cmath>
#include <iostream>

using namespace std;

int get_digit(unsigned ix, int n)
{
    if (n < 0)
        n *= -1;

    if (ix == 0)
        return 0;

    int shifted = floor(n / pow(10, ix - 1));
    return shifted % 10;
}

int num_digits(int n)
{
    if (n < 0)
        n *= -1;

    if (n == 0)
        return 1;

    int ndigits = 0;

    while (n > 0) {
        ndigits++;
        n = floor(n / 10);
    }

    return ndigits;
}

bool is_palindrome(int n)
{
    int nd = num_digits(n);

    for (int i = 1; i <= floor(nd / 2); ++i) {
        int d1 = get_digit(i, n);
        int d2 = get_digit(nd - i + 1, n);

        if (d1 != d2)
            return false;
    }

    return true;
}

int main()
{
    int largest_palindrome = 0;

    for (int i = 100; i < 1000 - 1; ++i) {
        for (int j = i + 1; j < 1000; ++j) {
            int prod = i * j;
            
            if (is_palindrome(prod) && prod > largest_palindrome)
                largest_palindrome = prod;
        }
    }

    cout << largest_palindrome << endl;
}
