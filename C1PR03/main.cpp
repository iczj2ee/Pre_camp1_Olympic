#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        if (number == 0) {
            cout << "0" << endl;
            continue;
        } else {
            string binary_number = "";
            while (number > 0) {
                binary_number = to_string(number % 2) + binary_number;
                number /= 2;
            }
            cout << binary_number << endl;
        }
    }
    return 0;
}