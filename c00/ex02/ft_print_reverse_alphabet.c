#include <unistd.h>
#include <string.h>

void ft_print_reverse_alphabet(void)
{
	char initial = 'z';

	while(initial >= 'a')
	{
		write(1, &initial, 1);
		initial--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();

	return (0);
}
