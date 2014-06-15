#include <iostream>
#include <vector>

using namespace std;

bool is_lcm(int n) {
    for (int i = 1; i <= 20; ++i)
        if (n % i != 0)
            return false;

    return true;
}

int main() {
    int i = 21;
    while(!is_lcm(i))
        i++;
    cout << i << endl;
}
