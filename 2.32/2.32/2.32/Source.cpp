#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int  w, l;
	double le, b;
	scanf_s("%d%d", &l, &w);
	printf("BMI VALUES\n");
	printf("Underweight:\tless than 18.5\n");
	printf("Normal:\tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25 and 29.9\n");
	printf("Obese:\t30 or greater\n");
	le = l / 100.0;
	printf("%d\t%d\n", l, w);
	printf("%4.2f\n", le);
	b = w / (le * le);
	printf("%4.2f\n", b);
	if (b < 18.5)
	{
		printf("Underweight");
	}
	if (b > 18.5 && b < 24.9)
	{
		printf("Normal");
	}
	else if (b > 25 && b < 29.9)
	{
		printf("Overweight");
	}
	else
	{
		printf("Obese");
	}
	return 0;
}