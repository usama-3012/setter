#include <iostream>;
using namespace std;
class employee{
	public:
		string name,father_name,gender;
		
};
class manager:public employee{
	public:
	string department;
	int sallary;
};
int main(){
   manager m;
	cout<<"enter name:"<<endl;
	getline(cin,m.name);
	cout<<"enter  father_name:"<<endl;
	getline(cin,m.father_name);
	cout<<"enter gender:"<<endl;
	getline(cin,m.gender);
	cout<<"enter department:"<<endl;
	getline(cin,m.department);
	cout<<"enter sallary:"<<endl;
	getline(cin,m.sallary);
	
    cout<<"name is:"<<m.name<<endl;
    cout<<"father name  is:"<<m.father_name<<endl;
    cout<<"gender is:"<<m.gender<<endl;
    cout<<"roll_number is:"<<m.department<<endl;
    cout<<"grade is:"<<m.sallary<<endl;
	
}
