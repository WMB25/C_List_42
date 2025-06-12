#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int *ft_range(int min, int max)
{
	if(min >= max) { return (NULL); }

        int i;
	int size;
        int* arr;

	size = max - min;
	arr = (int*)malloc(size * sizeof(int));

	if(!arr) { return (NULL); }
        
	i = 0;
        while(i < size)
        {
                arr[i] = min + i;
		i++;
        }
	return (arr);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
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
		ft_putnbr(num/10);
	}
	ft_putchar((num % 10) + '0');
}

int main(void)
{
	int min = 1;
	int max = 5;
	int* arr = ft_range(min, max);
	int size = max - min;
	int i;

	i  = 0;	
	while(i < size)
	{	
		ft_putnbr(arr[i]);
		if(i < size - 1)
		{
			ft_putchar(' ');
		}
		i++;
	}
	ft_putchar('\n');
	free(arr);
	return (0);
}
