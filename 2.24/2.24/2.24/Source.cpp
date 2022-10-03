#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	scanf_s("%d", &num1);
	if (num1 % 2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
	return 0;
}