#include<iostream>
using namespace std;
class employee{
	int id;
	float salary;
	public:
		employee(int inpId)
		{
			id=inpId;
			salary=34.0;
		}
		employee();
};
class programmer:employee{
	public:
		programmer(int inpId){
			id=inpId;
		}
	int language=9;
	
};
int main(){
	employee harry(1),rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	programmer.skillf(1);
	cout<<skillf.languagecode;
	
	return 0;
}
