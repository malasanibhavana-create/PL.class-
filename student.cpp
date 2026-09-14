#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    int roll_num;
    string name;
    float marks;

    void getDetails()
    {
        cout<<"enter the roll number of the student:"<<endl;
        cin>>roll_num;
        cout<<"enter the full name of the student"<<endl;
        cin>>name;
        cout<<"enter the marks of the student:"<<endl;
        cin>>marks;
    }
    void showinfo(){
        cout<<"roll num of the student:"<<roll_num<<endl;
        cout<<"name of the student:"<<name<<endl;
        cout<<"marks of the student:"<<marks<<endl;
    }
};
int main(){
    Student s1,s2;
    cout<<"enter the details of the student:"<<endl;
    s1.getDetails();
    s1.showinfo();

    cout<<"enter the details of the student:"<<endl;
    s2.getDetails();
    s2.showinfo();

}