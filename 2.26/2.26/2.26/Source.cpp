#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	if(a%b==0)
	{
		printf("%d is multiple of the %d", a, b);
	}
	else
	{
		printf("%d is not multiple of the %d", a, b);
	}
	return 0;
}