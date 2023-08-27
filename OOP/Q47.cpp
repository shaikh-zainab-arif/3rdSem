#include<iostream>
#include<string.h>
using namespace std;
class Student{
    private:
    char name[30];
    char grade;
    float m1,m2,m3,avg;
    public:
    void getdata(){
        cout << "Enter name:";
        cin >> name;
        cout << "Enter marks of 3 subjects:";
        cin >> m1>>m2>>m3;
    }
    void putdata(){
        avg = (m1+m2+m3)/3;
        if(avg >= 75){
            grade = 'A';
        }else if((avg < 75) && (avg >= 60)){
            grade = 'B';
        }else if((avg < 60) && (avg >= 40)){
            grade = 'C';
        }else{
            grade = 'F';
        }
        if(grade == 'A'){
            cout << "Name :" << name << endl;
            cout << "Average :" << avg << endl;
            cout << "Grade :" << grade << endl;
        }
    }
};
int main(){
    int n;
    cout << "Enter number of students:";
    cin >> n;
    Student student[n];
    for(int i = 0;i < n; i++){
        student[i].getdata();
    }
    for(int i = 0;i < n;i++){
        student[i].putdata();
    }
}
