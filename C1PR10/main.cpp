#include <iostream>
using namespace std;

int main() {
    string stadium;
    cin >> stadium;
    int timeOfVWin = 0;
    int timeOfVWinMax = 0;
    for (int i = 0; i < stadium.length(); i++){
        if (stadium[i] == 'V'){
            timeOfVWin++;
        } else{
            timeOfVWin = 0;
        }
        if (timeOfVWin > timeOfVWinMax){
            timeOfVWinMax = timeOfVWin;
        }
    }
    cout << timeOfVWinMax;
    return 0;
}