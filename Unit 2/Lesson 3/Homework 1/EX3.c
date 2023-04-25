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
int x=0,y=0;
printf("Enter two integers:");
fflush(stdin);fflush(stdout);
scanf("%d\n%d",&x,&y);
fflush(stdin);fflush(stdout);
printf("Sum:%d",x+y);
	return 0;
}
