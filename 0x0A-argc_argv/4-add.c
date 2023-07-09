#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry Point
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/
int main(int argc, char *argv[])
{
	int count, totalSum, num;

	if (argc == 1)
	{
		printf("0");
		printf("\n");
		return (0);
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			num = atoi(argv[count]);

			if (num == 0 && argv[count][0] != '0' && (num / num == 1))
			{
				printf("Error");
				printf("\n");
				return (1);
			}
			totalSum += num;
		}
	}

	printf("%d", totalSum);
	printf("\n");
	return (0);
}
