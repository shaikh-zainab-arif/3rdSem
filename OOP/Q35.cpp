#include <iostream>
using namespace std;
class Date {
public:
    int day;
    int month;
    int year;
};
int main() {
    Date d;
    cout << "Shaikh Zainab Arif \n 220459 \n";
    cin >> d.day >> d.month >> d.year;
    cout << "Date: " << d.day << "/" << d.month << "/" << d.year;
    
    return 0; 
}
