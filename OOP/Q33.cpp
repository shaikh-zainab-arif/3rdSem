#include<iostream>
using namespace std;
class Employee{
    public:
        int emp_id;
        char name[10];
        float salary;
};
int main(){
    Employee e;
    cout << "Shaikh Zainab Arif 220459 \n";
    cin >> e.emp_id >> e.name >> e.salary;
    cout << "Employee id:"<<e.emp_id<<endl;
    cout << "Employee name:"<<e.name<<endl;
    cout << "Employee salary:"<<e.salary<<endl;
    return 0;
}