#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int temp;

	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size - i - 1; j++)
		{
			if(tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int arr[] = {1, 4, 3, 5, 65, 8};
	int size = 6;

	 ft_sort_int_tab(arr, size);

    return (0);
}
