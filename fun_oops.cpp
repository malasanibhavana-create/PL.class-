#include<iostream>
#include<string>
using namespace std;
class car
{
    private:
    string brand;
    string model;
    float max_speed;
    string color;

    public:
    void getinfo(){
        cout<<"enter the brand of the car:"<<endl;
        cin>>brand;
        cout<<"enter the model of the car:"<<endl;
        cin>>model;
        cout<<"enter the max speed of the car:"<<endl;
        cin>>max_speed;
        cout<<"enter the color of the car:"<<endl;
        cin>>color;
    }
    void showinfo(){
        cout<<"********************"<<endl;
        cout<<"brand name:"<<brand<<endl;
        cout<<"model name:"<<model<<endl;
        cout<<"max_speed name:"<<max_speed<<endl;
        cout<<"color name:"<<color<<endl;
    }
};
int main(){
    car c1,c2;
    cout<<"enter the informationf of the car1"<<endl;
    c1.getinfo();
    c1.showinfo();
    cout<<"********************"<<endl;

    cout<<"enter the informationf of the car2"<<endl;
    c2.getinfo();
    c2.showinfo();

    return 0;
}