/*Create an Employee class with employee ID, name, department, and salary. Create an
object and display employee details.*/
#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    //data members
    int employee_id;
    string name;
    string department;
    int salary;
    //member functions
    void get_info(){
        cout<<"enter the employee id "<<endl;
        cin>>employee_id;
        cout<<"enter the name  "<<endl;
        cin>>name;
        cout<<"enter the department marks "<<endl;
        cin>>department;
        cout<<"enter the salary marks "<<endl;
        cin>>salary;
    }
    void display_info(){
        cout<<"roll no:"<<employee_id<<endl;
        cout<<"name"<<name<<endl;
        cout<<"department"<<department<<endl;
        cout<<"salary:"<<salary<<endl;
    }
};
int main(){
    employee e1;
    e1.get_info();
    e1.display_info();
    return 0;
}