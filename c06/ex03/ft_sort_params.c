#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

void bubble_sort_ascii(int argc, char** argv)
{
	int i;
	int j;
	char* temp;

	i = 0;
	while(i < argc - 1)
	{
		j = 1;
		while(j < argc - i - 1)
		{
			if(ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	bubble_sort_ascii(argc, argv);    

    	i = 1;
    	while (i < argc)
    	{
        	ft_putstr(argv[i]);
        	i++;
    	}
    	return (0);
}
