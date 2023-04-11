#include<stdio.h>
int main(){
	int a,b,temp;
	printf("enter the number : ");
	scanf("%d %d",&a,&b);
//	a=a+b; 
//	b=a-b;
//	a=a-b;
	
//	a=a*b;
//	b=a/b;
//	a=a/b;
	
	temp=a;
	a=b;
	b=temp;
	printf("after swap: %d %d ",a,b);
	return 0;
}
