/*Monthly Expense Tracker
Create an Expense class containing an array to store expenses for 12 months. Display
the yearly expense and average monthly expense. */
#include<iostream>
#include<string>
using namespace std;
class Expense{
    int expenses[12];
    int yearlyexpense=0;
    int avgExpense;

public:
    void getinfo(){
        cout<<"enter the expenses of 12 months:"<<endl;
        for(int i = 1;i <= 12;i++){
            cin>>expenses[i];
        }
    }
    void displayinfo(){
         cout << "\nexpenses of 12 months: "<<endl;
        for(int i = 0; i < 12; i++){
            cout << expenses[i] << " ";
            yearlyexpense = yearlyexpense + expenses[i];
        }
        avgExpense = yearlyexpense / 12.0;   //12.0 coz avgExpense is in float
        cout << "\nTotal expenses = " << yearlyexpense<<endl;
        cout << "\nAverage expenses = " << avgExpense<<endl;
    }
};
int main(){
    Expense e;
    e.getinfo();
    e.displayinfo();
    return 0;
}