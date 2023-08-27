#include<iostream>
#include<string.h>
using namespace std;
class Worker{
    private:
    char name[30];
    char skill[20];
    public:
    void getdata(){
        cout << "Enter name:";
        cin >> name;
        cout << "Enter skill:";
        cin >> skill;
    }
    void putdata(){
        if((strcmp(skill,"plumber"))==0){
            cout << "Worker name : "<<name<<endl;
        }
    }
};
int main(){
    int n;
    cout << "Enter number of workers:";
    cin >> n;
    Worker worker[n];
    for(int i = 0;i < n; i++){
        worker[i].getdata();
    }
    for(int i = 0;i < n;i++){
        worker[i].putdata();
    }
}
