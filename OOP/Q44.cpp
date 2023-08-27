#include <iostream>
using namespace std;
class Account {
public:
    int accountNumber;
    double balance;
};

int main() {
    int n;
    cout << "Enter the number of accounts: ";
    cin >> n;
    Account accounts[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter Account Number for account " << i + 1 << ": ";
        cin >> accounts[i].accountNumber;
        cout << "Enter Balance for account " << i + 1 << ": ";
        cin >> accounts[i].balance;
    }
    int maxIndex = 0;
    double maxBalance = accounts[0].balance;
    for (int i = 1; i < n; ++i) {
        if (accounts[i].balance > maxBalance) {
            maxBalance = accounts[i].balance;
            maxIndex = i;
        }
    }
    cout << "Account with the greatest balance: ";
    cout << "Account Number: " << accounts[maxIndex].accountNumber ;
    cout << " Balance: " << maxBalance <<endl;

    return 0;
}