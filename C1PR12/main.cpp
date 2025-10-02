#include <algorithm> // Required for std::reverse()
#include <iostream>
#include <string> // Required for using std::string
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string stadium;
        cin >> stadium;
        string stadiumReverse = stadium;
        reverse(stadiumReverse.begin(), stadiumReverse.end());
        if (stadium == stadiumReverse) {
            cout << "possible" << endl;
        } else {
            cout << "impossible" << endl;
        }
    }

    return 0;
}
