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
        void hg(Sample obj1 , Sample obj2){
            if(obj1.percentage > obj2.percentage){
                obj1.putdata();
            }else{
                obj2.putdata();
            }
        }
};
int main(){
    Sample obj1,obj2,obj3;
    obj1.getdata();
    obj2.getdata();
    cout << "Highest percentage:"<<endl;
    obj3.hg(obj1,obj2);
}