#include <stdio.h>
#include "main.h"
/**
*_strcmp - compare two strings
*@s1: first string to compare
*@s2: string to be compared with
*Return: int
*/
int _strcmp(char *s1, char *s2)
{

	int i;

	i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}

		s1++;
		s2++;
	}
	return (i);
}
