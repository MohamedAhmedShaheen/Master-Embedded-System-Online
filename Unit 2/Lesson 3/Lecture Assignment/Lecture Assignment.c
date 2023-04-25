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
int i=0,j=0;
	for(i=0;i<=9;i++)
	{
		for(j=i;j<=9;j++)
		{
			fflush(stdin);fflush(stdout);
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
