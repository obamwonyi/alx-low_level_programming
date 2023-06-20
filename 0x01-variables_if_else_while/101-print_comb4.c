#include <stdio.h>
/**
*main - Entry Point
*Description: all posible differenct combination of three digits
*Return: 0 on success.
*/
int main(void)
{
        int i, j, l;

        for (i = 48; i < 58; i++)
        {
                for (j = i + 1; j < 58; j++)
                {
                        for (l = j + 1; l < 58; l++)
			{
				putchar(i);
                        	putchar(j);

                        	if (j == (58 - 1) && i == (58 - 2))
                        	{
                                	break;
                        	}

                        	putchar(',');
                        	putchar(' ');
			}
                }
        }
        putchar('\n');

        return (0);
}

