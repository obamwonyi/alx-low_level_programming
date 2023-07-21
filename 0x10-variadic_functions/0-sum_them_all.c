#include <variadic_functions.h>
/**
*sum_them_all - sum all the values passed as argument to the function
*@n : series of integer values to be resived by the function
*Return: sum of all the value passed
*/
int sum_them_all(const unsigned int n, ...)
{
	int numArgs = n;
	int sumTotal = 0;
	va_list argsList;

	if(!n)
	{
		return (0);
	}

	va_start(argsList, n);

	while (numArgs)
	{
		sumTotal += va_arg(argsList, int);
	}

	va_end(argsList);

	return (sumTotal);
}
