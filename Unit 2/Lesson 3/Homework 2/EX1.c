#include <stdio.h>

int main(void) {
	int x=0;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	if(x==0)
		{printf("0 is neither odd nor even");}
	else if(x%2==0)
		{printf("%d is even",x);}
	else
		{printf("%d is odd",x);}
	return 0;
}
