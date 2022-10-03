#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int s;
	printf("number\tsquare\tcube\n");
	for (int i = 0; i < 11; i++)
	{
		printf("%d\t", i);
		s = i * i;
		printf("%d\t", s);
		s = i * i * i;
		printf("%d\n", s);
	}

	return 0;
}