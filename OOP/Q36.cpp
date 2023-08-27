#include<iostream>
using namespace std;
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        void getdata(int d , int m , int y){
            day = d;
            month = m;
            year = y;
        }
        void display(){
            cout << "Date :"<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
int main(){
    class Date d;
    cout << "Shaikh Zainab Arif 220459 \n";
    int d1,m1,y1;
    d1=21;
    m1=1;
    y1=2007;
    d.getdata(d1,m1,y1);
    d.display();
    return 0;
}