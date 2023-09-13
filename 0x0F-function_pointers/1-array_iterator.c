#include "main.h"

/**
* array_iterator - maps one array through a function pointer
* @array: the int array
* @size: the array size
* @action: function pointer
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && action)
		while (array <= end)
			action(*array++);
}
