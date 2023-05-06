#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i;
printf("Enter the string :  ");
scanf("%s",a);
printf("Reverse string is : ");
for(i=strlen(a)-1;i>=0;i--)
	{
	printf("%c",a[i]);
	}
}