#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("%d is the largest\n", a);
		if (b > c)
		{
			printf("%d is the smallest\n", c);
		}
		else
		{
			printf("%d is the smallest\n", b);
		}
	}
	if (c > b && c > a)
	{
		printf("%d is the largest\n", c);
		if (b > a)
		{
			printf("%d is the smallest\n", a);
		}
		else
		{
			printf("%d is the smallest\n", b);
		}
	}
	if (b > a && b > c)
	{
		printf("%d is the largest\n", b);
		if (a > c)
		{
			printf("%d is the smallest\n", c);
		}
		else
		{
			printf("%d is the smallest\n", a);
		}
	}

	return 0;
}