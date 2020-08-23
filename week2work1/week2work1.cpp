#include<stdio.h>
int main()
{
	int a, b, L;
	printf("Enter two number :");
	scanf_s("%d%d", &a, &b);
	for (L = (a > b) ? a : b; L < (a * b);L++)
	{
		if (L % a == 0 && L % b == 0)
			break;
	}
	printf("LCM of %d and %d is %d.", a, b, L);

}