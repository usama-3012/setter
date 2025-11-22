#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    int age;
    double weight;
};

class Dog : public Animal {
public:
    string breed;
    string color;
};

int main() {
    Dog d;

    cout << "Enter Animal Name: ";
    getline(cin, d.name);

    cout << "Enter Age: ";
    cin >> d.age;

    cout << "Enter Weight: ";
    cin >> d.weight;
    cin.ignore();

    cout << "Enter Breed: ";
    getline(cin, d.breed);

    cout << "Enter Color: ";
    getline(cin, d.color);

    
    cout << "Name: " << d.name << endl;
    cout << "Age: " << d.age << endl;
    cout << "Weight: " << d.weight << endl;
    cout << "Breed: " << d.breed << endl;
    cout << "Color: " << d.color << endl;
}
