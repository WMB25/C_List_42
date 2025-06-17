#include "ft.h"

int main(void)
{
	char* s1 = "Hello";
	char* s2 = "world";
	int size_s1 = 5;
       	int size_total = 10; 	

	ft_putchar(*s1);
	ft_putchar('\n');

	ft_putchar(ft_strlen(s1) + '0');
	ft_putchar('\n');

	ft_putchar(ft_strcmp(s1, s2) ? '>' : '<');
	ft_putchar('\n');

	ft_swap(&size_s1, &size_total);
	ft_putchar(size_s1 + '0');
	ft_putchar(' ');
	ft_putchar(size_total + '0');
	ft_putchar('\n');

	return (0);
}
