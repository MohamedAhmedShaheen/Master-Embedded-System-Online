/*
 ============================================================================
 Name        : Lecture.c
 Author      : Mohamed Ahmed Shaheen
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>

int main(void) {
float a=0,b=0;

printf("Enter value of a: ");
fflush(stdin);fflush(stdout);
scanf("%f",&a);
fflush(stdin);fflush(stdout);

printf("Enter value of b: ");
fflush(stdin);fflush(stdout);
scanf("%f",&b);
fflush(stdin);fflush(stdout);

a=a+b;
b=a-b;
a=a-b;

printf("After swapping, value of a = %g\n",a);
fflush(stdin);fflush(stdout);

printf("After swapping, value of b = %g",b);
fflush(stdin);fflush(stdout);
	return 0;
}
