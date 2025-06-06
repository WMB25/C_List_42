#include <unistd.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while(src[j] != '\0')
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
	char str[] = "Test";
	char str_two[] = "One";
	
	char* str_result = ft_strcat(str_two, str);

	int i = 0;
	while(str_result[i] != '\0')
	{
		i++;
	}

	write(1, str_two, i);
	return (0);

}
