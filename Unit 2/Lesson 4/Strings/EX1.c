#include<stdio.h>
void main()
{
char a[100],x;
int i,n=0;
printf("Enter a string: ");
scanf("%[^\n]",a);
printf("Enter a character to find frequency: ");
fflush(stdin);fflush(stdout);
scanf("%c",&x);
for(i=0;a[i]!='\0';i++)
	a[i] == x?++n:i;
printf("Frequency of %c = %d",x,n);
}