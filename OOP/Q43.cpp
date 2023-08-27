#include <iostream>
using namespace std;
class Account {
private:
    int accountNumber;
    double balance;
public:
    void getdata();
    void putdata();
}accounts[5];
void Account::getdata(){
    
    cout << "Enter Account Number";
    cin >>accountNumber;
    cout << "Enter Balance for account ";
    cin >> balance;

}
void Account::putdata(){
    
    if(balance > 2000){
        cout << "Account no:" << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
}
int main() {
    for (int i = 0;i < 5;++i){
        accounts[i].getdata();
    }
    
    for(int i = 0;i<5;++i){
        accounts[i].putdata();
    }
    return 0;
}