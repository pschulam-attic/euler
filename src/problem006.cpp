#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int sum_of_squares = 0;
    int square_of_sum  = 0;

    for (int i = 1; i <= 100; ++i) {
        sum_of_squares += pow(i, 2);
        square_of_sum  += i;
    }
    square_of_sum = pow(square_of_sum, 2);

    cout << square_of_sum - sum_of_squares << endl;
}
