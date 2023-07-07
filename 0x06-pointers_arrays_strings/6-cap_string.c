#include "main.h"
#include <stdio.h>

/**
*lower - checks if the chars passed is lower
*@i: the char passed as an argument
*Return: true(1) or false(0)
*/
int lower(char i)
{
	return (i >= 97 && i <= 122);
}
/**
*delimiter - check if the char is a delimeter
*@c: the char to check
*Return: 0 for false , 1 for true;
*/
int delimiter(char c)
{
	int i;

	char delimiter[] = "\t\n,.!?\"[]{} ";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
*cap_string - capitalize first letters
*@s: string to capitalize
*Return: capitalized string
*/
char *cap_string(char *s)
{
	char *ptr = s;

	int foundDelimit = 1;

	while (*s)
	{
		if (delimiter(*s))
		{
			foundDelimit = 1;
		}
		else if (lower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
		{
			foundDelimit = 0;
		}
		s++;
	}
	return (ptr);
}
