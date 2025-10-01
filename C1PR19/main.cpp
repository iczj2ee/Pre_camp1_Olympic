#include <iostream>
#include <iomanip>
using namespace std;

int discountCalculator(char typeOfGoods, int price);

int main() {
    int numberOfGoods;
    cin >> numberOfGoods;
    int totalPrice = 0;
    char typeOfGoods[numberOfGoods];
    int price[numberOfGoods];
    int priceDFKG[5] = {0}; // D, F, K, G, O
    for (int i = 0; i < numberOfGoods; i++){
        cin >> typeOfGoods[i] >> price[i];
    }
    for (int i = 0; i < numberOfGoods; i++){
        switch(typeOfGoods[i]){
            case 'D':
                priceDFKG[0] += price[i];
                break;
            case 'F':
                priceDFKG[1] += price[i];
                break;
            case 'K':
                priceDFKG[2] += price[i];
                break;
            case 'G':
                priceDFKG[3] += price[i];
                break;
            default:
                priceDFKG[4] += price[i];   
                break;
        }
    }
    string letters = "DFKGO";
    int totalPriceNotDiscout = 0;
    for (int i = 0; i < 5; i++){
        totalPriceNotDiscout += priceDFKG[i];
        totalPrice += discountCalculator(letters[i], priceDFKG[i]);
    }
    double vat = (double)totalPrice * 0.05;
    double totalPriceDouble = (double)totalPrice + vat;
    if (totalPrice == totalPriceNotDiscout){
        totalPriceDouble *= 2;
    }

    if (totalPriceDouble > 10000000){
        cout << "too expensive!" << endl;
    }
    else if (totalPriceDouble < 1000){
        cout << "love so poor, go buy more" << endl;

    }
    else{
        cout << fixed << setprecision(2) << totalPriceDouble << endl;
    }
    
    
    return 0;
}

int discountCalculator(char typeOfGoods, int price){
    string priceString = to_string(price);
    int discount = 0;

    // Type of goods
    // D - Drink
    // F - Food
    // K - ของใช้
    // G - Gadget ทั่วไป
    // . - อื่นๆ
    int sumOfOtherDifits = 0;
    int sumOfEvenDigits = 0;
    int sumOfOddDigits = 0;
    int productOfAllDigits = 1;
    int sumOfAllDigits = 0;
    int powOfProduct = 1;
    int powOfSum = 1;
    int halfOfSum = 0;
    switch(typeOfGoods){
        case 'D':
            for (int i = 1; i < priceString.length() - 1; i++){
                sumOfOtherDifits += (priceString[i] - '0');
            }
            if (((priceString[0] - '0') * (priceString[priceString.length() - 1] - '0')) > sumOfOtherDifits){
                discount = price * 0.2;
            }
            else if (((priceString[0] - '0') * (priceString[priceString.length() - 1] - '0')) < sumOfOtherDifits){
                discount = price * 0.1;
            }
            break;
        case 'F':
            for (int i = 1; i < priceString.length(); i++){
                if (i % 2 == 0){
                    sumOfEvenDigits += (priceString[i - 1] - '0');
                }
                else {
                    sumOfOddDigits += (priceString[i - 1] - '0');
                }
            }
            if (sumOfOddDigits > sumOfEvenDigits){
                discount = price * 0.2;
            }
            else {
                discount = price * 0.1;
            }
            break;
        case 'K':
            for (int i = 0; i < priceString.length(); i++){
                productOfAllDigits *= (priceString[i] - '0');
                sumOfAllDigits += (priceString[i] - '0');
            }
            for (int i = 0; i < productOfAllDigits; i++){
                powOfProduct *= 2;
            }
            for (int i = 0; i < sumOfAllDigits; i++){
                powOfSum *= 4;
            }
            if (powOfProduct > powOfSum){
                discount = price * 0.2;
            }
            else {
                discount = price * 0.1;
            }
            break;
        case 'G':
            for (int i = 0; i < priceString.length(); i++){
                productOfAllDigits *= (priceString[i] - '0');
                sumOfAllDigits += (priceString[i] - '0');
            }
            if(sumOfAllDigits == 0){
                discount = 0;
            }
            else if (sumOfAllDigits != 0){
                halfOfSum = sumOfAllDigits / 2;
                if ((productOfAllDigits % sumOfAllDigits) > halfOfSum){
                    discount = price * 0.2;
                }
                else if ((productOfAllDigits % sumOfAllDigits) < halfOfSum){
                    discount = price * 0.1;
                }
            }

            break;
        default:
            discount = 0;
    }
    return price - discount;
}