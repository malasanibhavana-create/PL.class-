/*Student Marks Analyzer
Create a Student class containing an array to store marks of five subjects. Display all
marks, total marks, and average marks*/
#include<iostream>
#include<string>
using namespace std;
class student{
    int marks[5]; 
    int total = 0;
    float average;

public:
    void getMarks(){
        cout << "Enter marks of five subjects: "<<endl;
        for(int i = 1; i <= 5; i++){
            cin >> marks[i];
        }
    }

    void display(){
        cout << "\nMarks of five subjects: "<<endl;
        for(int i = 0; i < 5; i++){
            cout << marks[i] << " ";
            total = total + marks[i];
        }
        average = total / 5.0;   //5.0 coz average is in float
        cout << "\nTotal Marks = " << total<<endl;
        cout << "\nAverage Marks = " << average<<endl;
    }
    
};
int main(){
    student s;
    s.getMarks();
    s.display();
    return 0;
}