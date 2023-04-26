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
int x=0;
printf("Enter integer:");
fflush(stdin);fflush(stdout);
scanf("%d",&x);
fflush(stdin);fflush(stdout);
printf("You entered:%d",x);
	return 0;
}
