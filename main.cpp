#include <iostream>
#include <vector>
#include <string>
using namespace std;

int convert_to_binary(int n) {
    if (n == 0) return 0; 
    int result = 0;
    int place = 1;
    while (n > 0) {
        int bit = n % 2;
        result = bit * place + result;
        n /= 2;
        place *= 10;
    }
    return result;
}

int convert_to_decimal(const string& binary_number) {
    int decimal_number = 0;
    for (char c : binary_number) {
        decimal_number = decimal_number * 2 + (c - '0');
    }
    return decimal_number;
}

int main() {
    int n;
    cin >> n;

    vector<int> dorayaki_result(n);
    char type;
    for (int i = 0; i < n; i++) {
        cin >> type;
        if (type == 'D') {
            int dorayaki;
            cin >> dorayaki;
            dorayaki_result[i] = convert_to_binary(dorayaki);
        } else if (type == 'B') {
            string binary_number;
            cin >> binary_number;
            dorayaki_result[i] = convert_to_decimal(binary_number);
        } else {
            dorayaki_result[i] = -1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (dorayaki_result[i] == -1) {
            cout << "Invalid input" << endl;
        } else {
            cout << dorayaki_result[i] << endl;
        }
    }

    return 0;
}
