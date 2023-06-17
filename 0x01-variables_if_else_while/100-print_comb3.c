#include <stdio.h>
/**
*main - Entry Point
*Description: all posible differenct combination of two digits
*Return: 0 on success.
*/
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (j == (58 - 1) && i == (58 - 2))
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
