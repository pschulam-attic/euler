#include <iostream>

using namespace std;

int main() {
    int s = 0;
    int total = 1e3;
    
    for (int i = 1; i < total; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            s += i;
        }
    }

    cout << s << endl;
}
