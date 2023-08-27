#include <iostream>
using namespace std;
int main() {
    const int baseRateUpTo100 = 200;
    const int baseRateOver100 = 500;
    const int additionalRateOver100 = 100;
    int mileage;
    cout << "Shaikh Zainab Arif 220459 \n";
    cout << "Enter the number of miles: ";
    cin >> mileage;

    int totalPrice = (mileage <= 100) ? mileage * baseRateUpTo100 : 
        100 * baseRateUpTo100 +(mileage - 100) * additionalRateOver100;

    cout << "Total price: $" << totalPrice << endl;

    return 0;
}
