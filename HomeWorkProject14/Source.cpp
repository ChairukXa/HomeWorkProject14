#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, sum, product, aSqua, bSqua, cSqua;
	a = b = c = product = aSqua = bSqua = cSqua = 0;
	sum = 1000;
	for (a = 1; a < (sum / 3); a++)
	{
		for (b = 2; b < (sum / 2); b++)
		{
			c = sum - b - a;
			aSqua = a * a;
			bSqua = b * b;
			cSqua = c * c;
			if ((aSqua + bSqua) == cSqua)
			{
				printf("a = %d, b = %d, c = %d", a, b, c);
				product = a * b * c;
				printf("\nProduct is %d", product);
				return 0;
			}
		}
	}
}