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

	while (s1[i])
	{
		if (((int)s1[i] - 48) > ((int)s2[i] - 48))
		{
			return (15);
		}
		else if (((int)s1[i] - 48) < ((int)s2[i] - 48))
		{
			return (-15);
		}
		i++;
	}

	return (0);
}
