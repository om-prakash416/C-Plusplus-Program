#include<iostream>
using namespace std;
int main(){

		int arr[10]={1,99,4,37,88,3,19,45,62,87};
		int i,num,*ptr;
		/*assigninhg the base address of array arra to ptr"*/
		ptr=arr;
		cout<<"enter the element to be search: ";
		cin>>num;
		for(i=0;i<10;i++)
		{
			if(*ptr==num){
				cout<<"\n"<<num<<"is present in the array";
				break;
			}
			else if(i==9)
			cout<<"\n"<<num<<"is not present in the array";
			ptr++;
			
		}
	}
