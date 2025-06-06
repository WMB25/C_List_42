#include <unistd.h>
#include <stdbool.h>

void ft_print_comb(void);
void out_print(char c);
void result(char x, char y, char z);

int main()
{
	ft_print_comb();
	return (0);
}

void  ft_print_comb(void)
{
	char x, y, z;

	x = '0';
	while(x <= '7')
	{
		y = x + 1;
		while(y <= '8')
		{
			z = y + 1;
			while(z <= '9')
			{
				result(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

void result(char x, char y, char z)
{
	out_print(x);
	out_print(y);
	out_print(z);

bool space_value = (!(x == '7' && y == '8' && z == '9')) ? true : false;

	if(space_value)
	{
		write(1, ", ", 2);
	}
}

void out_print(char c)
{
	write(1, &c, 1);
}
