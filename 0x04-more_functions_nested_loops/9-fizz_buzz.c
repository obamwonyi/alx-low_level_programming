#include <stdio.h>
/**
*main - print numbers and multiples of 3 and 5
*Return: 0 always
*/
int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if ((x % 3) == 0 && !((x % 5) == 0))
		{
			printf("Fizz");
		}
		else if ((x % 5) == 0 && !((x % 3) == 0))
		{
			printf("Buzz");
		}
		else if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
