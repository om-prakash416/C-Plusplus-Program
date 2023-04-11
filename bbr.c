#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
int main()
{
	int lenght,k;
	char str[100];
	printf("enter string :");
	gets(str);
	lenght=strlen(str);
	lenght= lenght-1;
	k=0;
	while(lenght>k)
	{
		if(str[lenght]!=str[k])
		{
			printf("%s is not palidrom",str);
			exit(0);
		}
		lenght--;
		k++;
	}
	printf("%s is palidrom",str);
	return 0;
}
