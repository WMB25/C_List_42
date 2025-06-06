#include <unistd.h>
#include <string.h>

int ft_strlen(char *str)
{
	int size;
	while(str[size]) { size++; }
	return (size);
}

int main(void)
{
	char test[] = "teste";

	int size = ft_strlen(test);

	write(1, test, size);
	return (0);
}
