#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2;
    cout << "Shaikh Zainab Arif 220459 \n";

    int result1 = a + b * c;
    int result2 = (a + b) * c;
    int result3 = a + (b * c);
    int result4 = (a + b)/c + (a * c);

    cout << "a + b * c = " << result1 << endl;
    cout << "(a + b) * c = " << result2 << endl;
    cout << "a + (b * c) = " << result3 << endl;
    cout << "(a + b)/c + (a * c) = " << result4 << endl;

    return 0;
}
