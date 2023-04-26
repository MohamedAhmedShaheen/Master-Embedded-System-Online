#include<stdio.h>
void main()
{
float x=0;
printf("Enter a number: ");
scanf("%f",&x);
if(x==0){printf("You entered zero.");}
else if(x>0){printf("%g is positive.",x);}
else{printf("%g is negative.",x);}
}