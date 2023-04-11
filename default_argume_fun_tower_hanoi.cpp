#include<iostream>
using namespace std;
void toh(int d,char tower1,char tower2,char tower3)
{
	if(d==1){
		cout<<"\n shift top disk from tower"<<tower1<<"to tower"<<tower2;
		return ;
	}
	toh(d-1,tower1,tower3,tower2);
	cout<<"\nshift top disk from tower "<<"to tower"<<tower2;
	toh(d-1,tower3,tower2,tower1);
}
	int main(){
		int disk;
		cout<<"enter the number of disks: ";
		cin>>disk;
		if(disk<1)
		cout<<"\nthere are no. disks to shift";
		else
		cout<<"\n there are"<<disk<<"disks in tower 1\n";
		toh(disk,'1','2','3');
		cout<<"\n\n"<<disk<<"disks in tower 1 are shifted to tower 2";
		return 0;	}
