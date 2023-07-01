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
		if (s1[i] > s2[i])
		{
			return (15);
		}
		else if (s1[i] < s2[i])
		{
			return (-15);
		}
		i++;
	}

	return (0);
}		
