#include <unistd.h>
#include <string.h>

void ft_print_alphabet(void)
{
	char initial = 'a';

	while(initial <= 'z')
	{
		write(1, &initial, 1);
		initial++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
