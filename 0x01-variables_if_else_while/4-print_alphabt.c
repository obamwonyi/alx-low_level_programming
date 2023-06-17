#include <stdio.h>
/**
*main - Entry Point
*Description: 'print alphabets except q and a'
*Return: always 0
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
