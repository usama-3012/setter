#include<iostream>
#include<fstream>
using namespace std;

class Person {
	public:
		string name, f_name, gender;

		void setName(string n) {
			name = n;
		}
		void setFName(string fn) {
			f_name = fn;
		}
		void setGender(string g) {
			gender = g;
		}

		string getName() {
			return name;
		}
		string getFName() {
			return f_name;
		}
		string getGender() {
			return gender;
		}
};

class Employee1 : public Person {
	public:
		string department;
		int salary;
		int age; 

		void setDept(string d) {
			department = d;
		}
		void setSalary(int s) {
			salary = s;
		}
		void setage(int a) {
			age = a;
		}

		string getDept() {
			return department;
		}
		int getSalary() {
			return salary;
		}
		int getage() {
			return age;
		}
};

class Employee2 : public Employee1 {
	public:
		int age;
		void setage(int a) {
			age = a;
		}
		int getage() {
			return age;
		}
};


void addEmployee() {
	Employee1 e1;

	string n, fn, g, dept;
	int sal, a;

	cin.ignore();
	cout << "Enter Name: ";
	getline(cin, n);
	e1.setName(n);

	cout << "Enter Father Name: ";
	getline(cin, fn);
	e1.setFName(fn);

	cout << "Gender: ";
	getline(cin, g);
	e1.setGender(g);

	cout << "Salary: ";
	cin >> sal;
	e1.setSalary(sal);

	cin.ignore();
	cout << "Department: ";
	getline(cin, dept);
	e1.setDept(dept);

	cout << "Age: ";
	cin >> a;
	e1.setage(a);

	ofstream outfile("employee1.txt", ios::app);
	outfile << e1.getName() << " "
	        << e1.getFName() << " "
	        << e1.getGender() << " "
	        << e1.getSalary() << " "
	        << e1.getDept() << " "
	        << e1.getage() << endl;

	outfile.close();
	cout << "\nEmployee 1 Added Successfully...\n";
}


void addEmployee2() {
	Employee2 e2;

	string n, fn, g, dept;
	int sal, a;

	cin.ignore();
	cout << "Enter Name: ";
	getline(cin, n);
	e2.setName(n);

	cout << "Enter Father Name: ";
	getline(cin, fn);
	e2.setFName(fn);

	cout << "Gender: ";
	getline(cin, g);
	e2.setGender(g);

	cout << "Salary: ";
	cin >> sal;
	e2.setSalary(sal);

	cin.ignore();
	cout << "Department: ";
	getline(cin, dept);
	e2.setDept(dept);

	cout << "Age: ";
	cin >> a;
	e2.setage(a);

	ofstream outfile("employee2.txt", ios::app);
	outfile << e2.getName() << " "
	        << e2.getFName() << " "
	        << e2.getGender() << " "
	        << e2.getSalary() << " "
	        << e2.getDept() << " "
	        << e2.getage() << endl;

	outfile.close();
	cout << "\nEmployee 2 Added Successfully...\n";
}


void displayEmployees() {
	string name, f_name, gender, dept;
	int salary, a; // FIX: a declare kiya

	ifstream infile("employee1.txt");

	cout << "\n--- Employee List ---\n\n";

	while (infile >> name >> f_name >> gender >> salary >> dept >> a) {
		cout << "Name: " << name << endl;
		cout << "Father Name: " << f_name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Salary: " << salary << endl;
		cout << "Department: " << dept << endl;
		cout << "Age: " << a << endl;
		cout << "-----------------------\n";
	}
}

void displayEmployees2() {
	string name, f_name, gender, dept;
	int salary, a; 
	

	ifstream infile("employee2.txt");

	cout << "\n--- Employee List ---\n\n";

	while (infile >> name >> f_name >> gender >> salary >> dept >> a) {
		cout << "Name: " << name << endl;
		cout << "Father Name: " << f_name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Salary: " << salary << endl;
		cout << "Department: " << dept << endl;
		cout << "Age: " << a << endl;
		cout << "-----------------------\n";
	}
}


int main() {
	int choice;

	cout << "--- Employee Management System ---\n";
	cout << "1. Add Employee\n";
	cout << "2. Display Employees\n";
	cout << "Enter your choice: ";
	cin >> choice;

	system("cls");

	if (choice == 1) {
		int choices;
		cout << "1:add data for employee 1:\n";
		cout << "2:add data for employee 2:\n";
		cout << "Enter your choice: ";
		cin >> choices;
		system("cls");

		if (choices == 1) {
			addEmployee();
		} else if (choices == 2) {
			addEmployee2();
		}
	}

	else if (choice == 2) {
		int choices;
		cout << "1:display data for employee 1:\n";
		cout << "2:display data for employee 2:\n";
		cout << "Enter your choice: ";
		cin >> choices;
		system("cls");

		if (choices == 1) {
			displayEmployees();
		} else if (choices == 2) {
			displayEmployees2(); 
		}
	}

	else {
		cout << "invalid data";
	}
}

