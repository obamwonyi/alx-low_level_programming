#include "main.h"
#include <stdio.h>
/**
*string_nconcat - concatenates two string, str1 and str2
*@str1: first string
*@str2: second string
*@num: to check for byte length of str2
*Return: char
*/
char *string_nconcat(char *str1, char *str2, unsigned int num)
{
	char *str;
	unsigned int i, j;
	unsigned int str1Length = 0;
	unsigned int str2Length = 0;

	if (str1 == NULL)
	{
		str1 = "";
	}
	if (str2 == NULL)
	{
		str2 = "";
	}

	while (str1[str1Length] != '\0')
	{
		str1Length++;
	}

	while (str2[str2Length] != '\0')
	{
		str2Length++;
	}

	str = malloc(str1Length + num + 1);

	if (str == NULL)
	{
		return (NULL);
	}


	for (i == 0; str1[i] != '\0'; i++)
	{
		str[i] = str1[i];
	}

	for (j = 0; j < num; j++)
	{
		str[i] = str2[j];
		j++;
	}

	str[i] = '\0';
	return (str);
}
