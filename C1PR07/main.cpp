#include <iostream>
using namespace std;

int main() {
    int stringLength;
    string feildType = "";
    int numberOfTypeToChangeWheel = 0;
    cin >> stringLength;
    cin >> feildType;
    if (feildType.length() != stringLength) {
        return -1;
    }
    for (int index = 0; index < stringLength; index++) {
        if (index != 0 && feildType[index] != feildType[index - 1])
            numberOfTypeToChangeWheel++;
    }
    cout << numberOfTypeToChangeWheel << endl;
    return 0;
}