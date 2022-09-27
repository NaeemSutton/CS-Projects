#include <iostream>
using namespace std;



int main() {

int money;
int totalDol;
int totalQ;
int totalD;
int totalN;
int totalP;
string nc = "no change";

cin >> money;

if(money == 0){
    cout << nc << endl;
}

    if (money >= 100 && money < 200){
        totalDol = money / 100;
        money = money % 100;
        cout << totalDol << " Dollar" << endl;
    } else if (money >= 100){
        totalDol = money / 100;
        money = money % 100;
        cout << totalDol << " Dollars" << endl;
    }

    if (money >= 25 && money < 100 && money >= 50){
        totalQ = money / 25;
        money = money % 25;
        cout << totalQ << " Quarters" << endl;
    } else if (money >= 25 && money < 100){
        totalQ = money / 25;
        money = money % 25;
        cout << totalQ << " Quarter" << endl;
    }

    if (money >= 10 && money < 25 && money >= 20){
        totalD = money / 10;
        money = money % 10;
        cout << totalD << " Dimes" << endl;
    } else if (money >= 10){
        totalD = money / 10;
        money = money % 10;
        cout << totalD << " Dime" << endl;
    }

    if (money >= 5 && money < 10 && money >= 10){
        totalN = money / 5;
        money = money % 5;
        cout << totalN << " Nickels" << endl;
    } else if (money >= 5){
        totalN = money / 5;
        money = money % 5;
        cout << totalN << " Nickel" << endl;
    }

    if (money >= 1 && money < 5 && money >= 2){
        totalP = money / 1;
        money = money % 1;
        cout << totalP << " Pennies" << endl;
    } else if (money >= 1){
        totalP = money / 1;
        money = money % 1;
        cout << totalP << " Penny" << endl;
    }


    return 0;

}