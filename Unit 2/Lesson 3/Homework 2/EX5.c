#include<stdio.h>
void main()
{
char c='A';
printf("Enter a charcater: ");
scanf("%c",&c);
if(c>='A' && c<='z'){printf("%c is an alphabet",c);}
else{printf("%c is not an alphabet",c);}
}