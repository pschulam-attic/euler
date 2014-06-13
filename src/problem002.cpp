#include <iostream>

using namespace std;

int fib(int ix) {
    if (ix < 1)
        return 0;

    switch (ix) {
    case 1:
        return 1;
    case 2:
        return 2;
    default:
        return fib(ix - 1) + fib(ix - 2);
    }
}

int main() {
    int sum = 0;
    int ix = 1;
    int max_fib = 4e6;

    while (true) {
       int f = fib(ix);
       if (f > max_fib)
           break;
       if (f % 2 == 0)
           sum += f;
       ++ix;
    }

    cout << sum << endl;
}
