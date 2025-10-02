#include <iostream>
using namespace std;

int main() {
    const long long MOD = 1000000007;
    long long x = 10;
    string password;
    cin >> password;

    for (int i = 0; i < (int)password.length(); i++) {
        if (password[i] == 'a') {
            x = (x + 7) % MOD;
        } else if (password[i] == 'b') {
            x = (x * 7) % MOD;
        } else if (password[i] == 'c') {
            x = (x * x) % MOD;
        }
    }

    cout << x % MOD << endl;
    return 0;
}
