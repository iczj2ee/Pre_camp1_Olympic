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

    for (int i = 1; i <= max_size; i++){
        long long result = i;
        for (int j = 1; j < dimension; j++){
            result = (result * i) % mod;
        }
        weight = (weight + result) % mod;
    }
    long long total_weight = (weight * 24) % mod;
    cout << total_weight << endl;

    return 0;
}
