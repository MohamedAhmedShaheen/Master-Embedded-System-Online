#include<stdio.h>
void main()
{
char a[100];
int i;
printf("Enter a string: ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++);
printf("Length of string: %d",i);
}