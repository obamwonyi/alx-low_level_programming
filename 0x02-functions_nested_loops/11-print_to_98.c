#include <stdio.h>
#include "main.h"
/**
*print_to_98 - print out all natural number
*@n: interger to print value from to 98
*Return: None
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			printf(", ");
			n--;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
		{
				break;
			}
			printf(", ");
			n++;
		}
	}
	printf("\n");
}
