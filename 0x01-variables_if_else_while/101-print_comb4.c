#include <stdio.h>

/**
 * main - Prints numbers between 012 and 789
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int g, h, i;

	g = 48;
	h = 48;
	i = 48;

	while (h < 58)
	{
		g = 48;
		while (g < 58)
		{
			i = 48;
			while (i < 58)
			{
				if (h != g && h != i  && g != i && h < g && g < i)
				{
					putchar(h);
					putchar(g);
					putchar(i);
					if (g == 56 && h == 55 && i == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			g++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}

