#include <unistd.h>

#define CORNER 'o'

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int x_c;
	int y_c;

	if (x < 1 || y < 1)
		return ;
	y_c = 1;
	while (y_c <= y)
	{
		x_c = 1;
		while (x_c <= x)
		{
			if ((x_c > 1 && x_c < x) && (y_c > 1 && y_c < y))
				ft_putchar(' ');
			else if ((x_c > 1 && x_c < x) && (y_c == 1 || y_c == y))
				ft_putchar('-');
			else if ((y_c > 1 && y_c < y) && (x_c == 1 || x_c == x))
				ft_putchar('|');
			else
				ft_putchar(CORNER);
			x_c++;
		}
		ft_putchar('\n');
		y_c++;
	}
}
int		main(void)
{
	rush(4, 1);
	return (0);
}