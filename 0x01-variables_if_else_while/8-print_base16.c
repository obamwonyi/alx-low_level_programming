#include <stdio.h>
/**
*main - Entry Point
*Description: 'print alphabets except q and a'
*Return: always 0
*/
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; n++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
