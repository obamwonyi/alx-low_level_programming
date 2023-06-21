#include "main.h"
#include "putchar.h"
/**
*jack_bauer - prints out the 24 ours time
*Return: None
*/
void jack_bauer(void)
{
	int tensHours, hours, tensMin, min;

	for (tensHours = 0; tensHours < 3; tensHours++)
	{
		for (hours = 0; hours < 10; hours++)
		{
			for (tensMin = 0; tensMin < 6; tensMin++)
			{
				for (min = 0; min < 10; min++)
				{
					if(tensHours >= 2 && hours >= 4)
					{
						break;
					}
					_putchar(tensHours + 48);
					_putchar(hours + 48);
					_putchar(58);
					_putchar(tensMin + 48)
					_putchar(min + 48);
					_putchar('\n');
				}
			}
		}
	}
}
					
