#include <unistd.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	if(min >= max) { return (NULL); }

	int size;
	int i;

	size = max - min;
	range = (int*)malloc(size * sizeof(int));
	
	if(!range) { return (-1); }
	
	i = 0;
	while(i < size)
	{
		*range[i] = min + 1;		
		i++;
	}
	return (range);
}

void ft_putchar( char c)
{
	write(1, &c, 1);
	return;
}

void ft_putnbr(int num)
{
	if(num < 0) 
	{ 
		ft_putchar('-'); 
		num = -num;
	}

	if(num >= 10)
	{
		ft_putnbr(num /10);
	}
	ft_putchar((num % 10) + '0');
}

int main(void)
{
	int min = 1;
	int max = 5;
	int* range;
	int result = ft_ultimate_range(range, min, max);
	int i;

	i = 0;
	while(i < max - min - 1)
	{
		ft_putnbr(*range[i]);
		i++;
	}
	ft_putchar(' ');
	return (0);
}
