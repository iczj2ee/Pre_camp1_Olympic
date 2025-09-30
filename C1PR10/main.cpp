#include <iostream>
using namespace std;

int main() {
    string charactorName;
    int charactorAttack;
    int characrtorDefense;
    int charactorHealth;

    int bossAttack;
    int bossHealth;
    int bossDefense;

    int damageToBoss;
    int damageAllToBoss = 0;

    int damageToCharactor;

    cin >> charactorName;
    cin >> charactorAttack >> characrtorDefense >> charactorHealth;
    cin >> bossAttack >> bossDefense >> bossHealth;

    while (charactorHealth > 0 && bossHealth > 0){
        damageToBoss = charactorAttack - bossDefense;
        if (damageToBoss < 0){
            damageToBoss = 0;
        }
        bossHealth -= damageToBoss;
        damageAllToBoss += damageToBoss;
        if (bossHealth <= 0){
            break;
        }

        damageToCharactor = bossAttack - characrtorDefense;
        if (damageToCharactor < 0){
            damageToCharactor = 0;
        }
        charactorHealth -= damageToCharactor;
        if (charactorHealth <= 0){
            break;
        }

    }
    if (charactorHealth < 0){
        charactorHealth = 0;
    }
    if (bossHealth < 0){
        bossHealth = 0;
    }
    if (charactorHealth > 0 && bossHealth <= 0){
        cout << "Victory" << endl;
    }
    else if (charactorHealth <= 0 && bossHealth > 0){
        cout << "Defeat" << endl;
    }
    cout << charactorName << charactorHealth << damageAllToBoss << endl;
    return 0;
}