#include<stdio.h>
void main()
{
int x=0,n=0,l=0,a[100],i;
printf("Enter no of elemets: ");
scanf("%d",&n);
if(n<=0){printf("Enter a valid value");}
else
	{
	for(i=0;i<n;i++)
		{
		scanf("%d", &a[i]);
		}
	printf("Enter the element to be inserted: ");
	scanf("%d",&x);
	printf("Enter the location: ");
	scanf("%d",&l);
	for(i=n;i!=l-1;i--)
		{
		a[i]=a[i-1];
		}
	a[l-1]=x;
	for(i=0;i<=n;i++)
		{
		printf("%d ",a[i]);
		}
	}
}