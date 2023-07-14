#include "main.h"
/**
* allocateByte - add a particular byt to memory
*@ptr: pointer for the byte
*@cont: constant
*@max: maximum bytes to use
*Return: ptr
*/
char *allocateByte(char *ptr, char cont, unsigned int max)
{
	char *pointer = ptr;

	while (max--)
	{
		*ptr++ = b;
	}

	return (ptr);
}

/**
*_calloc - allocate memory for an array
*@nmemb: length of the array
*@size: size of values
*Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
	{
		return (NULL);
	}

	allocateByte(m, 0, sizeof(int) * nmemb);

	return (0);
}
