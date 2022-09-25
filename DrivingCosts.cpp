#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

   double milesGallon;
   double gasGallon;;
   double cost1;
   double cost2;
   double cost3;
   
   cin >> milesGallon >> gasGallon;
   
   cout << fixed << setprecision(2);
   
   cost1 = (20 / milesGallon) * gasGallon;
   cost2 = (75 / milesGallon) * gasGallon;
   cost3 = (500 / milesGallon) * gasGallon;
   
   cout << cost1;
   cout << " ";
   cout << cost2;
   cout << " ";
   cout << cost3 << endl;
   
   
   

   return 0;
}
