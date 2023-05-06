#include<stdio.h>
void main()
{
int a[100][100],b[100][100],x=0,y=0,i=0,j=0;
printf("Enter rows and columns of matrix: ");
scanf("%d %d",&x,&y);
if(x<=0||y<=0){printf("Enter a valid size");}
else
	{
	for(;i<x;i++)
		{
		for(j=0;j<y;j++)
			{
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
			}
		}
printf("\nEntered Matrix:\n");
	for(i=0;i<x;i++)
		{
		for(j=0;j<y;j++)
			{
			printf("%d ",a[i][j]);
			}
		printf("\n\n");
		}
printf("\nTranspose Matrix:\n");
	for(i=0;i<y;i++)
		{
		for(j=0;j<x;j++)
			{
			printf("%d ",b[i][j]);
			}
		printf("\n\n");
		}
	}
}