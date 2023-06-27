#include "main.h"
/**
* rev_string - reverse a string
* @s: string to be reversed
* Return: None
*/
void rev_string(char *s)
{
	int x, y;
	char charHold;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	while (y < x / 2)
	{
		charHold = s[y];
		s[y] = s[x - (y + 1)];
		s[x - (y + 1)] = charHold;
		y++;
	}
}
