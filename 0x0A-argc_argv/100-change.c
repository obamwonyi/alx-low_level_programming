#include <stdio.h>
#include "main.h"
#include <stdlib.h>




/**
* changeDenom - the minimum change denomination
* @cents: the value passed
* Return: int
*/
int changeDenom(int cents)
{
	int currentValue = cents;
	int minNumCoins = 0;

	if (currentValue >= 25)
	{
		minNumCoins += currentValue / 25;
		currentValue = currentValue % 25;
		if (currentValue == 0)
			return (minNumCoins);
	}

	if (currentValue >= 10)
	{
		minNumCoins += currentValue / 10;
		currentValue = currentValue % 10;
		if (currentValue == 0)
			return (minNumCoins);
	}

	if (currentValue >= 5)
	{
		minNumCoins += currentValue / 5;
		currentValue = currentValue % 5;
		if (currentValue == 0)
			return (minNumCoins);
	}

	if (currentValue >= 2)
	{
		minNumCoins += currentValue / 2;
		currentValue = currentValue % 2;
		if (currentValue == 0)
			return (minNumCoins);
	}

	minNumCoins += currentValue / 1;
	return (minNumCoins);
}

/**
* main - entry point
* @argc: parameter counter
* @argv: array(char *) of the parameters
* Return: int
*/
int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	printf("%d\n", changeDenom(atoi(argv[1])));
	return (0);
}
