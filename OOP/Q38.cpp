#include<iostream>
using namespace std;
class sample{
    private:
        int x;
        int y;
    public:
        void accept(){
            cout << "Enter values of x & y:"<<endl;
            cin >> x >> y;
        }
        void display(){
            cout<<"Sum :"<<sum()<<endl;
            cout<<"Diff :"<<diff()<<endl;
            cout<<"Pro :"<<pro()<<endl;
            cout<<"Div :"<<div()<<endl;
        }
        int sum(){
            return x+y;
        }
        int diff(){
            return x-y;
        }
        int pro(){
            return x*y;
        }
        int div(){
            return x/y;
        }
};
int main(){
    sample s;
    s.accept();
    s.display();
    return 0;
}
