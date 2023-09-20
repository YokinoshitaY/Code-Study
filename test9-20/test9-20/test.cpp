#include <stdio.h>
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int dif = 0;
	scanf_s("%d%d", &num1, &num2);
	dif = num1 - num2;
	printf("%d\n", dif);
	return 0;
}