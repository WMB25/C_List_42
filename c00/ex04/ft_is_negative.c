#include <unistd.h>

void ft_is_negative(int n)
{
	char sinal = (n > 0) ? 'P':'N';
	write(1, &sinal, 1);
}

void main(void)
{
	ft_is_negative(2);
	return (0);
}
