#include<stdio.h>
int main(){
	int reverse =0,n,rem;
	printf("enter a number : ");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	printf("reverse number is %d",reverse);
	return 0;
}
