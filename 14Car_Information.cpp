/*Create a Car class with brand, model, price, mileage, and fuel type. Create an object
and display the car details.*/
#include<iostream>
#include<string>
using namespace std;
class car{
public:
    // data members
    string brand;
    string model;
    int mileage;
    int price;
    string fuelType;

    // data functions
    void get_info(){
        cout << "enter the brand of the car" << endl;
        cin >> brand;

        cout << "enter the model of the car" << endl;
        cin >> model;

        cout << "enter the mileage of the car" << endl;
        cin >> mileage; // how many km the car travels per litre

        cout << "enter the price of the car" << endl;
        cin >> price;

        cout << "enter the fuel type of the car" << endl;
        cin >> fuelType;
    }

    void show_info(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

int main(){
    car s1;
    s1.get_info();
    s1.show_info();
    return 0;
}