#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string results[n];
    for (int i = 0; i < n; i++) {
        char command;
        cin >> command;
        if (command == 'D'){
            long long number;
            cin >> number;
            if (number == 0) {
                results[i] = "0";
                continue;
            }
            else {
                string binary_number = "";
                while (number > 0){
                    binary_number = to_string(number % 2) + binary_number;
                    number /= 2;
                }
                results[i] = binary_number;
            }
        }
        else if (command == 'B'){
            string binary_number;
            cin >> binary_number;
            long long decimal_number = 0;
            for (int j = 0; j < binary_number.size(); j++){
                int index = binary_number.size() - 1 - j;
                if (binary_number[j] == '1'){
                    long long num = 1;
                    for (int times = 0; times < index; times++){
                        num *= 2;
                    }
                    decimal_number += num;
                }
            }
            results[i] = to_string(decimal_number);
        }
    }
    for (int i = 0; i < n; i++){
        cout << results[i] << endl;
    }
    return 0;
}