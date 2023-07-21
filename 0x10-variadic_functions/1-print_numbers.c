#include "variadic_functions.h"
/**
*print_numbers - prints the numbers passed as arguments
*@separator: pointer of char type to use as value separator
*@n: numbers to print
*Return: none
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int numArgs = n;
	va_list argList;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(argList, n);

	while (numArgs--)
	{
		printf("%d%s", va_arg(argList, int),
			numArgs ? (separator ? separator : "") : "\n");
	}

	va_end(argList);
}
