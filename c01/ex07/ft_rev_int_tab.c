#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int start = 0, temp, end = size - 1;

	while(start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;

		start++;
		end--;
	}
}

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int size  = 7;

	ft_rev_int_tab(arr, size);

	return (0);
}

