#include <stdio.h>

int main(void)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
