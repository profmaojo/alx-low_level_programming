#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	for (i = 0; i <= 9; i++)
	{
		for (e = (i + 1); e <= 9; e++)
		{
			putchar(i);
			putchar(e);

			if (i != 8 || e != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

}
