/*Daily Temperature Tracker
Create a Weather class containing an array to store temperatures for seven days.
Display all temperatures and calculate the average temperature. */
#include<iostream>
#include<string>
using namespace std;
class Weather{
    int temperatures[7];
    int totTemp=0;
    int avgTemp;

public:
    void getinfo(){
        cout<<"enter the 7 temperatures :"<<endl;
        for(int i = 1;i <= 7;i++){
            cin>>temperatures[i];
        }
    }
    void displayinfo(){
        cout << "\nTemperatures for 7 days:\n";
        for(int i = 0; i < 7; i++){
            cout << "Day " << i + 1 << ": "<< temperatures[i] << endl;
            totTemp = totTemp + temperatures[i];
        }
        avgTemp = totTemp / 7;
        cout << "\navgTemp Temperature = " << avgTemp;
    }
};
int main(){
    Weather w;
    w.getinfo();
    w.displayinfo();
    return 0;
}