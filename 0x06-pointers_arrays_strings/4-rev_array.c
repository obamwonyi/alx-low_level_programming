#include <stdio.h>
#include "main.h"
/**
*reverse_array - return int array value in reverse
*@a: array
*@n: number of array elements
*Return: None
*/
void reverse_array(int *a, int n)
{

	int i, x, y;

	x = n - 1;

	for (i = 0; i < x; i++)
	{
		/**
		* swap the first with the last
		* then the second to last with second
		* then third with third to last
		* and so on
		*/
		y = a[i];
		a[i] = a[x];
		a[x] = y;
		x--;
	}
}
