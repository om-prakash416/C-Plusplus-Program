#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *ptr;
	ptr=&a;
	cout<<"the value of a is : "<<*ptr;
	*ptr+=a;
	cout<<"\n the revised value of a is "<<a;
	return 0;
}
