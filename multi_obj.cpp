#include<iostream>
using namespace std;
class car{
	public:
		string brand;
		string model;
		int year;
};
int main(){
	car carObj1;
	carObj1.brand="BMW";
	carObj1.model="x5";
	carObj1.year=1689;
	
	car carObj2;
	carObj2.brand="ford";
	carObj2.model="mustang";
	carObj2.year=1999;
	cout<<carObj1.brand<<endl<<carObj1.model<<endl<<carObj1.year<<"\n"<<endl<<endl<<carObj2.brand<<endl<<carObj2.model<<endl<<carObj2.year<<endl;
	return 0;
}
