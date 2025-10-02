#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int value = 0; // This variable is declared but not used
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            value++;
        }
    }
    cout << value << endl;
    return 0;
}
