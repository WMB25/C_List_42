#include <unistd.h>

void ft_putnbr(int nb)
{
	if(nb == 0)
	{
		write(1, "0", 1);
		return;
	}

	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}

	char num_char[12];
	int i = 0;

	while(nb > 0)
	{
		num_char[i++] = (nb % 10) + '0';
		nb /= 10;
	}

	while(i > 0)
	{
		write(1, &num_char[--i], 1);
	}

	write(1, "\n", 1);
}

int main(void)
{
	ft_putnbr(42);

	return (0);
}
