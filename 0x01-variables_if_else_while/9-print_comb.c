#include <stdio.h>
/**
 *maim - main block
 *Description: Print all possible combinaisons for single-digit numbers.
 *Nmbers must be separated by commas and a space.
 *You can only use `putchar` to print to console.
 *You can onky use `putchar` up to four times.
 *You are not allowed to use any variable of type `char`.
 *Return: 0
 */

int main(void)
{
	int i = 0;

	while ( i < 10 )
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}

		i++
	}

	putchat('\n');

	return (0);

}
