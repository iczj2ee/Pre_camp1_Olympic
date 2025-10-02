#include <iostream>
using namespace std;

int main() {
    long long q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        long long a;
        cin >> a;
        int count = 0;
        for (long long j = 1; j * j <= a; j++) {
            if (a % j == 0) {
                count++;
            }
            if (count > 1) {
                break;
            }
        }
        if (count <= 1) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
