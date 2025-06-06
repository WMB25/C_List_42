#include <stdio.h>

int ft_strlen(char *str)
{

	int qtdy = 0;

	while(*str != '\0')
	{
		qtdy++;
		str++;
	}

	return qtdy;
}

int main (void)
{

	int soluction = ft_strlen("Test");

	return (0);
}
