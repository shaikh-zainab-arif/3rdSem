#include<iostream>
using namespace std;
class Sample{
    private:
        int rollno;
        float percentage;
    public:
        void getdata(){
            cout << "Enter roll no:";
            cin >> rollno;
            cout << "Enter percentage : ";
            cin >> percentage;
        }
        void putdata(){
            cout << "Roll No = " << rollno ;
            cout << " Percenatge = " << percentage << endl;
        }
};
int main(){
    Sample obj1 , obj2;
    obj1.getdata();
    obj2.getdata();
    obj1.putdata();
    obj2.putdata();
}