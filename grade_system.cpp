#include<iostream>
#include<string>
using namespace std;
int main(){
    int rollno;
    string name;
    int phy,chem,maths,grade;
    cout<<"enter the roll number of the student;"<<endl;
    cin>>rollno;
    cout<<"enter the name of the student:"<<endl;
    cin>>name;
    cout<<"enter phy marks;"<<endl;
    cin>>phy;
    cout<<"enter chem marks;"<<endl;
    cin>>chem;
    cout<<"enter maths marks;"<<endl;
    cin>>maths;
    grade = (phy + chem + maths)/3;
    cout<<"grade of the student is:"<<grade<<endl;
    if (grade >= 90 && grade <= 100) {
    cout << "grade = A" << endl;
    }
    else if (grade >= 80 && grade < 90) {
        cout << "grade = B" << endl;
    }
    else if (grade >= 70 && grade < 80) {
        cout << "grade = C" << endl;
    }
    else if (grade >= 60 && grade < 70) {
        cout << "grade = D" << endl;
    }
    else if (grade >= 50 && grade < 60) {
        cout << "grade = E" << endl;
    }
    else{
        cout<<"FAIL"<<endl;
    }
    return 0;
}