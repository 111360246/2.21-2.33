#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int s = 1;
	for (int i = 0; i < 5; i++)
	{

		for (int u = i; u < 4; u++)
		{
			printf(" ");
		}
		for (int a = i; a < s; a++)
		{

			printf(".");

		}
		s += 3;
		printf("\n");
	}

	return 0;
}