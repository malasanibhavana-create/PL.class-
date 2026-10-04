/*Create a Movie class with movie name, director, language, rating, and ticket price.
Create an object and display the movie information. */
#include<iostream>
#include<string>
using namespace std;
class movie{
public:
    string movie_name;
    string director;
    string language;
    int rating;
    int ticket_price;

    void get_info(){
        cout<<"enter the movie name "<<endl;
        cin>>movie_name;
        cout<<"enter name of director "<<endl;
        cin>>director;
        cout<<"enter the language"<<endl;
        cin>>language;
        cout<<"enter the ratings"<<endl;
        cin>>rating;
    }
    void display_info(){
        cout<<"movie name:"<<movie_name<<endl;
        cout<<"director"<<director<<endl;;
        cout<<"language:"<<language<<endl;
        cout<<"rating"<<rating<<endl;
        cout<<"ticket price"<<ticket_price<<endl;
    }
};
int main(){
    movie m;
    m.get_info();
    m.display_info();
    return 0;
}