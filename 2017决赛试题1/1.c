#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d, sum;
	a = 'Y' - 'A' + 10;
	b = 'N' - 'A' + 10;
	c = 10;
	d = 'M' - 'A' + 10;
	b = b * 36;
	c = c * 36 * 36;
	d = d * 36 * 36 * 36;
	sum = a + b + c + d;
	printf("%d\n", sum);
	system("PAUSE");
	return 0;
}