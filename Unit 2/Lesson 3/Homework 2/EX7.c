#include<stdio.h>
void main()
{
int n=0,factorial=1;
printf("Enter an integer: ");
scanf("%d",&n);
if(n<0)
	{
	printf("Error!!! Factorial of negative number doesn't exist.");
	}
else if(n==0)
	{printf("Factorial is 1");}
else	{do
		{
		factorial=factorial * n;
		n--;
		}
	while(n!=0 && n>0);
	printf("Factorial is %d",factorial);
	}
}