#include <unistd.h>
#include <string.h>

void ft_putstr(char *str)
{
	int size;

	size = 0;
	while(str[size]) { size++; }
	write(1, str, size);
}

int main (void)
{
	char str[] = "Testhjvgg";
	ft_putstr(str);
	return (0);
}
