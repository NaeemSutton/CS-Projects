#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double quarter = 0.25;
    double dime = 0.10;
    double nickel = 0.05;
    double penny = 0.01;
    double quarters;
    double dimes;
    double nickels;
    double pennies;
    double total;
    double change;
    double amountPaid;



    cout << "Enter the total amount of the purchase: ";
    cin >> total; 

    cout << "enter the amount paid: ";
    cin >> amountPaid; 

    change = amountPaid - total;
    cout << "Your change is: " << "$" << change;

    quarters = floor(change / quarter); 
    change = change - (quarters * quarter); 

    dimes = floor(change / dime);
    change = change - (dimes * dime);

    nickels = floor(change / nickel);
    change = change - (nickels * nickel);


    pennies = change;

    cout << "Your change is ";
    cout << " quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    return 0;
}




