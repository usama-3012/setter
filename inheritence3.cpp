#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    string model;
    int year;
};

class Car : public Vehicle {
public:
    string engineType;
    int numberOfDoors;
};

int main() {
    Car c;

    cout << "Enter Brand: ";
    getline(cin, c.brand);

    cout << "Enter Model: ";
    getline(cin, c.model);

    cout << "Enter Manufacturing Year: ";
    cin >> c.year;


    cout << "Enter Engine Type: ";
    getline(cin, c.engineType);

    cout << "Enter Number of Doors: ";
    cin >> c.numberOfDoors;

    
    cout << "Brand: " << c.brand << endl;
    cout << "Model: " << c.model << endl;
    cout << "Year: " << c.year << endl;
    cout << "Engine Type: " << c.engineType << endl;
    cout << "Doors: " << c.numberOfDoors << endl;
}
