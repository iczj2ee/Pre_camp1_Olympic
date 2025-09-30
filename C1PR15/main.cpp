#include <iostream>
using namespace std;

int main() {
    string type;
    int max_size;
    cin >> type >> max_size;
    int mod = 1000000007;
    long long weight = 0;
    if (type == "row"){
        weight = (((max_size * (max_size + 1) % mod)) / 2) % mod;
    }

    else if (type == "grid"){
        weight = (((((max_size * max_size) % mod + max_size) % mod) * (((2 * max_size) % mod) + 1)) / 6) % mod;
    }
    else if (type == "block"){
        weight = ((((max_size * (max_size + 1) % mod) / 2) % mod) * (((max_size * (max_size + 1) % mod) / 2) % mod)) % mod;
    }
    cout << (weight * 24) % mod << endl;
    

    

    return 0;
}
