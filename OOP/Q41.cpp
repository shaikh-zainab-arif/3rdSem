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
    Sample obj[5];
    for(int i = 0 ; i < 5 ; i++){
        obj[i].getdata();
    }
    for(int i = 0 ; i < 5 ; i++){
        obj[i].putdata();
    }
}