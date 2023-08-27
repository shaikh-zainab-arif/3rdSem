#include <iostream>
using namespace std;
class sample {
private:
    int x;
    int y;

public:
    void accept();
    void display();
    int sum();
    int diff();
    int pro();
    int div();
};
void sample::accept() {
    cout << "Enter values of x & y:" << endl;
    cin >> x >> y;
}
void sample::display() {
    cout << "Sum :" << sum() << endl;
    cout << "Diff :" << diff() << endl;
    cout << "Pro :" << pro() << endl;
    cout << "Div :" << div() << endl;
}
int sample::sum() {
    return x + y;
}
int sample::diff() {
    return x - y;
}
int sample::pro() {
    return x * y;
}
int sample::div() {
    return x / y;
}
int main() {
    sample s;
    cout << "Shaikh Zainab Arif 220459 \n";
    s.accept();
    s.display();
    return 0;
}
