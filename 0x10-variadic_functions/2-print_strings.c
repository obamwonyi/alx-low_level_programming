#include "variadic_functions.h"
/**
*print_strings - print strings
*@separator: separator for the strings
*@n: number of strings passed
*Return: none
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int argNum = n;
	char *str;
	va_list argList;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(argList, n);

	while (argNum--)
	{
		printf("%s%s", (str = va_arg(argList, char*)) ? str : "(nil)",
			argNum ? (separator ? separator : "") : "\n");
	}

	va_end(argList);
}
