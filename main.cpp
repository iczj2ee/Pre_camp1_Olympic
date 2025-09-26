#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int type_ingredients[n];
    int size_ingredients[n];

    for (int i = 0; i < n; i++) {
        cin >> type_ingredients[i] >> size_ingredients[i];
    }

    for (int i = 0; i < n; i++){
        switch (type_ingredients[i]){
        case 1:
            for (int line = 0; line <= size_ingredients[i]; line++){
                for (int star = 0; star < line; star++){
                    if (star != 0 && star != line - 1 && line != size_ingredients[i]){
                        cout << "  ";
                    } else {
                        cout << "* ";
                    }
                    
                }
                cout << endl;
            }
            break;
        
        case 2:
            for (int line = 0; line < size_ingredients[i]; line++){
                for (int space = 0; space < size_ingredients[i] - (line + 1); space++){

                    cout << "  ";
                    
                }
                for (int star = 0; star <= line; star++){
                    if (star != 0 && star != line && line != size_ingredients[i] - 1){
                        cout << "  ";
                    } else {
                        cout << "* ";
                    }
                }
                cout << endl;
            }
            break;
        
        case 3:
            for (int line = size_ingredients[i] - 1; line >= 0; line--){
                for (int space = 0; space < size_ingredients[i] - (line + 1); space++){

                    cout << "  ";
                    
                }
                for (int star = 0; star <= line; star++){
                    if (star != 0 && star != line && line != size_ingredients[i] - 1){
                        cout << "  ";
                    } else {
                        cout << "* ";
                    }
                }
                cout << endl;
            }
            break;
        case 4:
            for (int line = size_ingredients[i]; line > 0; line--){
                for (int star = 0; star < line; star++){
                    if (star != 0 && star != line - 1 && line != size_ingredients[i]){
                        cout << "  ";
                    } else {
                        cout << "* ";
                    }
                    
                }
                cout << endl;
            }
            break;
        default:
            break;
        }
    }

    return 0;
}
