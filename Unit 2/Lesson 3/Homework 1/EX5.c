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
char c='A';
printf("Enter a character: ");
fflush(stdin);fflush(stdout);
scanf("%c",&c);
fflush(stdin);fflush(stdout);
printf("ASCII value of %c = %d",c,c);
	return 0;
}
