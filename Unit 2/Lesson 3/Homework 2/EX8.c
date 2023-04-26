#include<stdio.h>
void main()
{
char op='A';
float x=0,y=0;
printf("Enter operator either + or - or * or divide : ");
scanf("%c",&op);
printf("Enter two operands: ");
scanf("%f\n%f",&x,&y);
switch (op)
	{
	case '+':
	printf("%g + %g = %g",x,y,x+y);
	break;
	
	case '-':
	printf("%g - %g = %g",x,y,x-y);
	break;
	
	case '*':
	printf("%g * %g = %g",x,y,x*y);
	break;
	
	case '/':
	if(y==0){printf("Error!");}
	else{printf("%g / %g = %g",x,y,x/y);}
	break;
	
	default:
	printf("Enter a valid operator");
	}
}