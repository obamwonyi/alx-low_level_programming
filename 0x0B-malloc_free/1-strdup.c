#include <string.h>
#include <stdlib.h>
/**
* _strdup - return curpyied string
* @str: string
* Return: pointers to characters
*/
char *_strdup(char *str)
{

	int i = 0;
	int size = 0;
	char *newPointer;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0') size++;

	newPointer = (char *)malloc(size * sizeof(*str) + 1);

	if (newPointer == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		newPointer[i] = str[i];
		i++;
	}

	return (newPointer);
}
