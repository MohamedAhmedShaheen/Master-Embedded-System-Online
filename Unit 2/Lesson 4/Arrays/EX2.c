#include<stdio.h>
void main()
{
float a[100],avg=0;
int n=0,i=0;
printf("Enter the numbers of data: ");
scanf("%d",&n);
if(n<=0){printf("Number of data can't be zero or negative value");}
else
	{
	for(;i<n;i++)
		{
		printf("Enter number: ");
		scanf("%f",&a[i]);
		avg=avg+a[i];
		}
	printf("Average = %.2f",avg/n);
	}
}