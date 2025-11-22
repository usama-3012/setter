#include <iostream>;
using namespace std;
class person{
	public:
		string name,father_name,gender;
		
};
class student:public person{
	public:
	string roll_no,grade;
};
int main(){
	student s;
	cout<<"enter name:"<<endl;
	getline(cin,s.name);
	cout<<"enter  father_name:"<<endl;
	getline(cin,s.father_name);
	cout<<"enter gender:"<<endl;
	getline(cin,s.gender);
	cout<<"enter roll_number:"<<endl;
	getline(cin,s.roll_no);
	cout<<"enter grade:"<<endl;
	getline(cin,s.grade);
    cout<<"name is:"<<s.name<<endl;
    cout<<"father name  is:"<<s.father_name<<endl;
    cout<<"gender is:"<<s.gender<<endl;
    cout<<"roll_number is:"<<s.roll_no<<endl;
    cout<<"grade is:"<<s.grade<<endl;
	
}
