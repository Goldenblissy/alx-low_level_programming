#include <stdio.h>
/**
* main - Prints numbers between 012 to 789.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, e, g;

	i = 48;
	e = 48;
	g = 48;
	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			g = 48;
			while (g < 58)
			{
<<<<<<< HEAD
				if (e != i && e != g && i != g && e < i && i < g)						
				{
					putchar(e);
					putchar(i);
					putchar(g);																if (i == 56 && e == 55 && g == 57)
					{
					break;
					}
					putchar(',');										
					putchar(' ');
				}																	g++;
			}
			i++;																}
=======
				if (e != i && e != g && i != g && e < i && i < g)
				{
					putchar(e);
					putchar(i);
					putchar(g);
					if (i == 56 && e == 55 && g == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				g++;
			}
			i++;
		}
>>>>>>> 8da216e28f6392faed9315597741ecc5957d07bd
		e++;
	}
	putchar('\n');
	return (0);
<<<<<<< HEAD
}
=======
}
>>>>>>> 8da216e28f6392faed9315597741ecc5957d07bd
