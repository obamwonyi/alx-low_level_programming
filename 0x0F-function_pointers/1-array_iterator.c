#include "function_pointers.h"
/**
*array_iterator - maps an array through a func pointer
*@array: array of integers
*@size: size of the array
*@action: function pointer
*Return: None (void)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *stop = (size - 1) + array;

	if (array && size && action)
	{
		while (array <= stop)
		{
			action(*array++);
		}
	}
}
