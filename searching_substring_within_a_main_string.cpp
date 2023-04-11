#include<iostream>
#include <cstring>
#include<string>
using namespace std;
int main(){
	int i,j;
	char str[]="\nc++is better than c";
	int len = strlen(str);
	char *substr=new char[len];
	cout<<"the main string is: "<<str;
	cout<<"\n\nenter the substring to be searched: ";
	cin>>substr;
	int k,len2 = strlen(substr);
	for(i=0;i<len;i++)
	{
		k=i;
		for(j=0;j<len2;j++)
		{
		if(str[k]==substr[j])
		{
			if(j==len2-1)
			{
				cout<<"\nthe substring is present in the main string";
			exit(0);
			}
			k++;
		}
		else
			break;
		}
	}
	if(i==len)
	cout<<"\nthe substring is not present in the main string";
}
