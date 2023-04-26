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
float x=0,y=0;
printf("Enter two numbers:");
fflush(stdin);fflush(stdout);
scanf("%f\n%f",&x,&y);
fflush(stdin);fflush(stdout);
printf("Product: %f",x*y);
	return 0;
}
