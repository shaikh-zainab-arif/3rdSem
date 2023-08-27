#include<iostream>
using namespace std;
class Employee{
    private:
        char name[10];
        float bs;
    public:
        void getdata();
        void putdata();
        float gs();
};
void Employee::getdata(){
    
    cout << "Enter name:";
    cin >> this->name;
    cout << "Enter basic salary: ";
    cin >> this->bs;
}
void Employee::putdata(){
    cout << this->name << " Basic: " << this->bs << " Gross:" << this->gs() << endl;
}
float Employee::gs(){
    float hra , da , ta , gross;
    hra = this->bs * 0.15;
    da = this->bs * 0.35;
    ta = 500;
    gross = this->bs + hra + ta + da;
    return gross;
}
int main(){
    Employee employee[5];
    int noOfEmployees = sizeof(employee)/sizeof (employee[0]);
    for(int i = 0; i < noOfEmployees ; ++i){
        employee[i].getdata();
    }
    cout << "Gross Salary:"<<endl;
    for(int i = 0 ; i < noOfEmployees ; ++i){
        employee[i].putdata();
    }

    return 0;
}