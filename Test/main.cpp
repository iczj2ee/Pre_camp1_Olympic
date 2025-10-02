#include <iostream>
#include <iomanip>
using namespace std;



int main() {
    
    double x = 0.3+0.3+0.3;
    if (abs(x-0.9) < 1e-15){
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}

