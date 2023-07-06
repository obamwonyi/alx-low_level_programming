#include "main.h"
/**
*primeCheck - check if the value passed is a prime number
*@n: the number to check for
*@x: evaluation number
*Return: int
*/
int primeCheck(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (primeCheck(n, x + 1));
	}
}
/**
*is_prime_number - look for the prime numbers of an argument
*@n: the argument , who's prime number is to be found
*Return: int
*/
int is_prime_number(int n)
{
	return (primeCheck(n, 2));
}

