#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (i < 58)
	{
		if (e != i && e < i)
		{
			ptchar(e);
			putchar(i);
			if (i == 57 && e == 56)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		e++;
	}
	putchar('\n');
	return (0);
}
