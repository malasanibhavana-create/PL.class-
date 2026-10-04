/*Create a HotelRoom class with room number, room type, number of days, and room
charge. Display the complete room details. */
#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    public:
    //data members
    int room_num;
    string room_type;
    int number_of_days;
    int room_charge;
    //member functions
    void get_info(){
        cout<<"enter the bank account number "<<endl;
        cin>>room_num;
        cout<<"enter the room type "<<endl;
        cin>>room_type;
        cout<<"enter the number of days  "<<endl;
        cin>>number_of_days;
        cout<<"enter the room charges "<<endl;
        cin>>room_charge;
    }
    void display_info(){
        cout<<"room number:"<<room_num<<endl;
        cout<<"room type"<<room_type<<endl;;
        cout<<"number_of_days:"<<number_of_days<<endl;
        cout<<"room charges"<<room_charge<<endl;
    }
};
int main(){
    bankaccount b1;
    b1.get_info();
    b1.display_info();
    return 0;
}