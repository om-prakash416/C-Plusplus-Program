#include<iostream>
using namespace std;
int main(){

		int num[]={56,75,22,18,90};
		int *ptr;
		int i;
		cout<<"the array values are: \n";
		for(i=0;i<5;i++)
		cout<<num[i]<<"\n";
		/*allocating the base address of num to ptr*/
		ptr=num;
		/*printing the value in the array*/
		cout<<"\n values of ptr : "<<*ptr;
		cout<<"\n";
		ptr++;
			cout<<"\n values of ptr++ : "<<*ptr;
		cout<<"\n";
		ptr--;
			cout<<"\n values of ptr-- : "<<*ptr;
		cout<<"\n";
		ptr=ptr+2;
			cout<<"\n values of ptr+2 : "<<*ptr;
		cout<<"\n";
		ptr=ptr-1;
			cout<<"\n values of ptr-1 : "<<*ptr;
		cout<<"\n";
		ptr+=3;
			cout<<"\n values of ptr+3 : "<<*ptr;
		cout<<"\n";
		ptr-=2;
			cout<<"\n values of ptr-=2 : "<<*ptr;
		cout<<"\n";
		
	}
