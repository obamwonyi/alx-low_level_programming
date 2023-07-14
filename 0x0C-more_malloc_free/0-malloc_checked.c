#include "main.h"
/**
*malloc_checked - try to allocate memory with malloc, exit on fail
*@num: unsigned int argument
*Return: pointer to an array or null
*/
void *malloc_checked(unsigned int num)
{
	int *ptr = malloc(num);

	if (ptr == 0)
	{
		exit(98);
	}

	return (ptr);
}
