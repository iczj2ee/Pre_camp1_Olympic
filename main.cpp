#include <iostream>
using namespace std;

int main() {
    int lineNum;
    int Denominator;
    string contents = "", contentBuffer;
    cin >> lineNum >> Denominator;
    for (int lineCount = 0; lineCount < lineNum; ++lineCount) {
        cin >> contentBuffer;
        contents += contentBuffer;
    }
    for (int i = 1; i <= contents.length(); ++i) {
        if (i % Denominator == 0){
            cout << contents[i - 1];
        }
    }
    cout << endl;
    return 0;
}
