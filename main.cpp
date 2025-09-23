#include <iostream>
#include <vector>

using namespace std;
void convert_to_binary(int n){
    vector<int> binary_number;
    while (n > 0){
        binary_number.push_back(n % 2);
        n = n / 2;
    }
    for (int i = binary_number.size() - 1; i >= 0; i--){
        cout << binary_number[i];
    }
    cout << endl;
}


int main(){
    int n;
    
    cin >> n;
    int dorayaki[n];
    int dorayaki_binary_number[n];
    for(int i = 0; i < n; i++){
        cin >> dorayaki[i];
    }
    
    
    for (int i = 0; i < n; i++){
        convert_to_binary(dorayaki[i]);
    }

    return 0;
}