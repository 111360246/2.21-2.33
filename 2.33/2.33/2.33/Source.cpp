#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, e, t, y, x;
	printf("Total miles driven per day:");
	scanf_s("%d", &a);
	printf("Cost per gallon of gasoline:");
	scanf_s("%d", &b);
	printf("Average miles per gallon:");
	scanf_s("%d", &c);
	printf("Parking fees per day:");
	scanf_s("%d", &d);
	printf("Tolls per day:");
	scanf_s("%d", &e);
	x = a / c;
	y = b * x;
	t = d + e + y;
	printf("Tatal cost:%d", t);
	return 0;
}