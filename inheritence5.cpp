#include <iostream>
using namespace std;

class Product {
public:
    string productName;
    double price;
    string manufacturer;
};

class Electronics : public Product {
public:
    int warrantyYears;
    string powerUsage;
};

int main() {
    Electronics e;

    cout << "Enter Product Name: ";
    getline(cin, e.productName);

    cout << "Enter Price: ";
    cin >> e.price;
    cin.ignore();

    cout << "Enter Manufacturer: ";
    getline(cin, e.manufacturer);

    cout << "Enter Warranty (Years): ";
    cin >> e.warrantyYears;
    cin.ignore();

    cout << "Enter Power Usage: ";
    getline(cin, e.powerUsage);

    
    cout << "Name: " << e.productName << endl;
    cout << "Price: " << e.price << endl;
    cout << "Manufacturer: " << e.manufacturer << endl;
    cout << "Warranty: " << e.warrantyYears << " years" << endl;
    cout << "Power Usage: " << e.powerUsage << endl;
}
