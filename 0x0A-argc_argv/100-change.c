#include <stdio.h>
#include <stdlib.h>
/**
*denominate - slice change down
*@number: amount
*Return: remainder
*/
int denominate(int number)
{
	int remainder, times;
	int num = number;

	times = 0;
	remainder = num % 25;
	if (remainder != 0)
	{
		times = num / 25;
		num = remainder;
		remainder = num % 10;
		if (remainder != 0)
		{
			times += num / 10;
			num = remainder;
			remainder = num % 5;
			if (remainder != 0)
			{
                times += num / 5;
                num = remainder;
                remainder = num % 2;
                if (remainder != 0)
                {
                    times += num / 2;
                    times += remainder / 1;
                    return (times);
                }
                else
                {
                    times += num / 2;
                    return (times);
                }
			}
			else
			{
				times += num / 5;
				return (times);
			}
		}
		else
		{
			times += num / 10;
			return (times);
		}
	}
	else
	{
		printf("%d\n", num);
		times += num / 25;
		return (times);
	}
}
	
/**
*main - Entry Point
*@argc: number of argument
*@argv: array of argument
*Return: num, error or 1
*/
int main(int argc, char *argv[])
{
	int moneyPaid;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	moneyPaid = atoi(argv[1]);

	if (moneyPaid < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", denominate(moneyPaid));
	return (0);
}
