#include "main.h"

/**
* print_name - prints a name
* @name: the name to print as pointers to chars
* @f: the function to print the name
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f (name);
}
