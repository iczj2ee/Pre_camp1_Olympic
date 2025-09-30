#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long value = 0;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            value += i;
            if (i != n / i) {
                value += n / i;
            }
        }
    }
    cout << value << endl;
    return 0;
}
