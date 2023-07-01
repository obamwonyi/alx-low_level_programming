#include "main.h"
#include <stdio.h>
/**
*isLower - check if c is lower case
*@c: is the char passed to be checked for lowercase
*Return: int
*/
int isLower(char c)
{
	return (c > 96 && c < 123);
}

/**
*isDelimiter - check if char c is a delimter(word separator)
*@c: is the char passed to check if it is a delimiter
*Return: int
*/
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
		{
			return (i);
		}
	}
	return (0);
}
/**
*cap_string - return a string with capitalized words
*@str: string to be capitalized
*Return: string
*/
char *cap_string(char *str)
{
	char *ptr = str;
	int foundDelimit = 1;

	while (*str)
	{
		if (isDelimiter(*str))
		{
			foundDelimit = 1;
		}
		else if (isLower(*str) && foundDelimit)
		{
			*str -= 32;
			foundDelimit = 0;
		}
		else
		{
			foundDelimit = 0;
		}
		str++;
	}
	return (ptr);
}
