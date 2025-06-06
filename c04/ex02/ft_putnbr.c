#include <unistd.h>

void ft_putnbr(int nb)
{
	if(nb >= 10) { ft_putnbr(nb / 10); }

	char num_char = (nb % 10) + '0';
	write(1, &num_char, 1);
}

int main(void)
{
	ft_putnbr(10);

	return(0);
}
