#include<stdio.h>
void main()
{
int n=0,sum=0;
printf("Enter an integer: ");
scanf("%d",&n);
while(1){
	if(n<=0)
		{
		printf("Enter a valid positive integer: ");
		scanf("%d",&n);
		}
	else	{do
			{
			sum=sum+n;
			n--;
			}
		while(n!=0 && n>0);
		printf("Sum = %d",sum);
		break;
		}
	}
}