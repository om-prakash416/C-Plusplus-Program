#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("enter a number :");
	scanf("%d",&a);
	printf("enter any character:");
	scanf("%c",&ch);
	printf("enter number b:");
	scanf("%d",&b);
	switch(ch) 
	{

	case'+': c=a+b;
	printf("%d",c);
	break;
	case'*':c=a*b;
	printf("%d",c);
	break;
	case'-':c=a-b;
	printf("%d",c);
	break;
	case'/':c=a/b;
	printf("%d",c);
	break;
	case'%':c=a%b;
	break;
		}
	
	return 0;
}
