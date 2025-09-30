#include <iostream>
using namespace std;

int main() {
    string type;
    int max_size;
    cin >> type >> max_size;
    int dimension;
    int mod = 1000000007;
    if (type == "row") dimension = 1;
    else if (type == "grid") dimension = 2;
    else if (type == "block") dimension = 3;


    long long weight = 0;

    for (long long i = 1; i <= max_size; ++i) {
        long long result = i;
        if (dimension >= 2) result = (i * i) % mod;   // i^2
        if (dimension >= 3) result = (i * i * i) % mod;   // i^3
        weight = (weight + result) % mod;
    }
    cout << ( weight * 24 ) % mod << endl;

    return 0;
}
