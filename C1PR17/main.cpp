#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 2; i <= q; i++) {
        int count = 0;
        if (i == 2) {
            cout << i << " ";
            continue;
        }
        if (i % 2 == 0) {
            continue;
        }

        for (long long j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
            if (count > 1) {
                break;
            }
        }
        if (count <= 1) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
