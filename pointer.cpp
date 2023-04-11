#include<iostream>
using namespace std;
 int main(){
 	int a,*ptr1,**ptr2;
 	ptr1=&a;
 	ptr2=&ptr1;
 	cout<<"the adddress of a: "<<ptr1<<"\n";
 	cout<<"the address of ptr1: "<<ptr2;
 	cout<<"\n";
 	cout<<"after increamenting of the address values: \n";
 	ptr1+=2;
 	cout<<"the address of a : "<<ptr1<<"\n";
 	ptr2+=2;
 	cout<<"the address of ptr1: "<<ptr2<<"\n";
 }
