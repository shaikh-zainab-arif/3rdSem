#include<iostream>
using namespace std;
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        void getdata(){
            cout << "Enter day , month , year:"<<endl;
            cin >> day >> month >> year;
        }
        void display(){
            cout << "Date :"<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
int main(){
    class Date d;
    d.getdata();
    d.display();
    return 0;
}