#include <stdio.h>
#include <stdlib.h>
/**
* create_array - create arra of chars
* @size: size of the array
* @c: charater
* Return: Null or char
*/
char *create_array(unsigned int size, char c)
{

	unsigned int i = 0;
	char *arrChars = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (arrChars == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arrChars[i] = c;
	}

	return (arrChars);
}
