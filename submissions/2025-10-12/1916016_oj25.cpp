#include <iostream>
using namespace std;

int main() {
    long long x;
    int a = 0;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            a++;
        }
    }
    cout << a;
    return 0;
}
