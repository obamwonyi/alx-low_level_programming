#include <stdio.h>
#include "main.h"
/**
*_strncat - another function for concatenating strings
*@dest: carries the first string
*@src: the string to concatenate to dest string
*@n:number of bytes
*Return: char(in string form)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	while (dest[x])
	{
		x++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[x + i] = src[i];
	}

	dest[x + i]  = '\0';

	return (dest);
}
