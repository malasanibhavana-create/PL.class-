/*Cricket Score Tracker
Create a Cricketer class containing an array to store scores from five matches. Display
all scores, total runs, and average runs. */
#include<iostream>
#include<string>
using namespace std;
class cricket{
    int scores[5];
    int totalRuns=0;
    int avgRuns;

public:
    void getinfo(){
        cout<<"enter the scores of 5 matches:"<<endl;
        for(int i = 1;i <= 5;i++){
            cin>>scores[i];
        }
    }
    void displayinfo(){
         cout << "\nscores of five matches: "<<endl;
        for(int i = 0; i < 5; i++){
            cout << scores[i] << " ";
            totalRuns = totalRuns + scores[i];
        }
        avgRuns = totalRuns / 5.0;   //5.0 coz average is in float
        cout << "\nTotal scores = " << totalRuns<<endl;
        cout << "\nAverage scores = " << avgRuns<<endl;
    }
};
int main(){
    cricket c;
    c.getinfo();
    c.displayinfo();
    return 0;
}