#include<stdio.h>
int main(){
	int n,r,sum=0,temp;
	printf("enter the number : ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		n=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
		if(temp==sum){
		
		printf("armstromg number ");
	}
		else
		{
		printf("not a armstrong number ");
	}
	return 0;
}
