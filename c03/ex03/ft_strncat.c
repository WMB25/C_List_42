#include <unistd.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while(src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char test[] = "Teste";
	char test_two[] = "funcionou";
	int i = 0;

	char * str_result = ft_strncat(test, test_two, 9);
	while(str_result[i] != '\0')
	{
		i++;
	}
	
	write(1, test, i);
	return (0);
}

