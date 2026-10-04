/*Create a BankAccount class with account number, account holder name, and balance.
Create an object and display the account information.*/
#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    public:
    //data members
    int account_num;
    string holder_name;
    int balance;
    //member functions
    void get_info(){
        cout<<"enter the bank account number "<<endl;
        cin>>account_num;
        cout<<"enter the holder name  "<<endl;
        cin>>holder_name;
        cout<<"enter the balance marks "<<endl;
        cin>>balance;
    }
    void display_info(){
        cout<<"roll no:"<<account_num<<endl;
        cout<<"holder name"<<holder_name<<endl;;
        cout<<"balance:"<<balance<<endl;
    }
};
int main(){
    bankaccount b1;
    b1.get_info();
    b1.display_info();
    return 0;
}