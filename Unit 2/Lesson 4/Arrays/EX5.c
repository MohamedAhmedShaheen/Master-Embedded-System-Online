#include<stdio.h>
void main()
{
int x=0,n=0,i,a[100];
printf("Enter no of elements : ");
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("Enter the element to be searched : ");
scanf("%d",&x);
for(i=0;i<n;i++)
	{
	if(a[i]==x)
		{printf("Number found at the location = %d",i+1);break;}
	else if(i==n-1)
		printf("Number not found");
	else
		continue;
	}
}