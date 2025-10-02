#include <iostream>
using namespace std;
long long x, y;
long long result;
double result_d;
char operate;
int main() {
    cin >> x >> y;
    cin >> operate;
    switch (operate) {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        if (y == 0) {
            cout << "Divided by zero!" << endl;
        } else {
            result_d = double(x) / double(y);
        }
        break;
    case '?':
        result = x % y;
        break;
    default:
        cout << "Invalid operator!" << endl;
    }
    if (operate != '/' && operate != ' ') {
        cout << result << endl;
    }
    if (operate == '/') {
        if (y != 0) {
            printf("%.2f\n", result_d);
        }
    }

    return 0;
}