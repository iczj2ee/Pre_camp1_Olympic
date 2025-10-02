#include <iostream>
using namespace std;

int main() {
    string type;
    long long max_size;
    cin >> type >> max_size;
    int mod = 1000000007;
    long long weight = 0;
    if (type == "row") {
        // 12 * n * (n+1)
        weight = (12LL * max_size) % mod;
        weight = (weight * (max_size + 1)) % mod;
    } else if (type == "grid") {
        // 4 * n * (n+1) * (2n+1)
        weight = (4LL * max_size) % mod;
        weight = (weight * (max_size + 1)) % mod;
        weight = (weight * (2 * max_size + 1)) % mod;
    } else if (type == "block") {
        // 6 * (n * (n+1))^2
        long long part = (max_size * (max_size + 1)) % mod;
        weight = (part * part) % mod;
        weight = (weight * 6) % mod;
    }
    cout << weight % mod << endl;

    return 0;
}
