#include<stdio.h>
void main()
{
float a=0,b=0,c=0;
printf("Enter three numbers: ");
scanf("%f\n%f\n%f",&a,&b,&c);
if(a>b)
	{
	if(a>c){printf("Largest number is %g",a);}
	else{printf("Largest number is %g",c);}
	}
else
	{
	if(b>c){printf("Largest number is %g",b);}
	else{printf("Largest number is %g",c);}
	}
}