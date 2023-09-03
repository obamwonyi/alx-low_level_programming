#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
* main - entry point
* @argc: argument count
* @argv: array of argument
* Return: int
*/
int main(int argc, char *argv[])
{
	int i = 1;
	int x = 0;
	int holder = 0;

	/**
	* if there are no argument print 0 and return
	*/
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	/**
	*loop for as long as i is less than argc
	*/
	while (i < argc)
	{	/**
		*loop for as long as the value of the argument string is not
		*the null zero
		*/
		for (x = 0; argv[i][x] != '\0'; x++)
		{	/**
			*if the current value is not an integer
			*print error and return 1
			*/
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		}

		holder += atoi(argv[i]);
		i++;
	}

	printf("%d\n", holder);
	return (0);
}
