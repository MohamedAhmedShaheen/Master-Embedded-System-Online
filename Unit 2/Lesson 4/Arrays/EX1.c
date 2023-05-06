#include<stdio.h>
void main()
{
float a[2][2],b[2][2];
printf("Enter the elements of 1st matrix\n");
printf("Enter a11: ");
scanf("%f",&a[0][0]);
printf("Enter a12: ");
scanf("%f",&a[0][1]);
printf("Enter a21: ");
scanf("%f",&a[1][0]);
printf("Enter a22: ");
scanf("%f",&a[1][1]);

printf("Enter the elements of 2nd matrix\n");
printf("Enter b11: ");
scanf("%f",&b[0][0]);
printf("Enter b12: ");
scanf("%f",&b[0][1]);
printf("Enter b21: ");
scanf("%f",&b[1][0]);
printf("Enter b22: ");
scanf("%f",&b[1][1]);

printf("Sum Of Matrix:\n");
printf("%.1f\t%.1f\n",a[0][0]+b[0][0],a[0][1]+b[0][1]);
printf("%.1f\t%.1f\n",a[1][0]+b[1][0],a[1][1]+b[1][1]);
}