//#include<stdio.h>
//int main()
//{
//	int fact=1,i,n;
//	printf("enter number: ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		fact=fact*i;
//	}
//	printf("factorial %d is %d",n,fact);
//	
//}
//2nd method
//#include<stdio.h>
//long factorial(int n)
//{
//	if(n==0)
//	return 1;
//	else
//	return (n*fact(n-1));
//}
//int main(){
//	int n;
//	long fact;
//	printf("enter number: ");
//	scanf("%d",&n);
//	fact=factorial(n);
//	printf("factorial of %d is %d",n,fact);
//
//}

//prime number
//#include<stdio.h>
//int main(){
//	int num,flag=0,m=0;
//	printf("enter number : ");
//	scanf("%d",&num);
//	m=num/2;
//	for(int i=2;i<=m;i++)
//	{
//		if(num%i==0){
//		printf("not a prime number");
//		flag=1;
//		break;
//	}
//	}
//	if(flag==0)
//		printf("prime number");
//	return 0;
//}
//palindrome number
/*#include<stdio.h>
int main(){
	int n,r,sum=0,temp;
	printf("enter the numner: ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	printf("palindrome");
	else
	printf("not a palindrome");
	return 0;
}*/
//armstrong number

/*#include<stdio.h>
int main(){
	int n,r,sum=0,temp;
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		sum=(sum+(r*r*r));
		n=n/10;
	}	  
if(temp==sum)
printf("armstrong number");
else
printf("not a armstrong");
return 0;
}*/
















