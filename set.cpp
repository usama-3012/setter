#include <iostream>
using namespace std;
class person{
	string n,fname,Cnic;
	public:
	void setname(string name) {
		n=name;
	}
	void setfname(string f_name) {
		fname=f_name;
	}
	void setcnic(string cnic) {
		Cnic=cnic;
	}
	
	string getname(){
		return n;
	}
	string getfname(){
		return fname;
	}
	string getcnic(){
		return Cnic;
	}
};




int main(){
	person p1;
	string name,f_name,cnic;
	cout<<"Enter name:"<<endl;
   getline(cin, name);
   p1.setname(name);
	cout<<"Enter father_name:"<<endl;
	 getline(cin, f_name);
	 p1.setfname(f_name);
	cout<<"Enter cnic:"<<endl;
	 getline(cin, cnic);
	 p1.setcnic(cnic);
	cout << "Name: " << p1.getname() << endl;
    cout << "father name: " << p1.getfname() << endl;
    cout << "cnic: " << p1.getcnic();
   return 0;
}
