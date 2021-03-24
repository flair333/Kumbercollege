#include <iostream>
#include <string>
using namespace std;
//enter name of the student
//enter rollnumber
//enter the subjects that are assigned to them
class student{
	public:
		string name;
		int rollnumber;
	public:
		string subject[3];
	public:
		entry(){
			cout<<"enter student name"<<endl;
			cin>>name;
			cout<<"enter student rollnumber"<<endl;
			cin>>rollnumber;
			for(int i=0;i<3;i++){
				cout<<"enter subject name"<<endl;
				cin>>subject[i];
			}
		}
	public:
		display(){
			cout<<"Name of the student as :"<<name<<endl;
			cout<<"Roll number of the student as : "<<rollnumber<<endl;
			for(int i=0;i<3;i++){
				cout<<"subject no:  "<<i+1<<"taken by student as: "<<subject[i]<<endl;
			}
		}
};
int main(){
	student object;
	object.entry();
	object.display();
	return 0;
}
