#include <iostream>
using namespace std;

int main() {
    int n;
    int Xmax = -1000000, Ymin = 1000000, Zmax = -1000000;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x > Xmax) {
            Xmax = x;
            Ymin = y;
            Zmax = z;
        }
        if (x == Xmax) {
            if (y < Ymin) {
                Ymin = y;
                Zmax = z;
            }
            if (y == Ymin && z > Zmax) {
                Zmax = z;
            }
        }
    }
    cout << Xmax << " " << Ymin << " " << Zmax << endl;
    return 0;
}