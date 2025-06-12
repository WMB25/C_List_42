#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	char* str;
	
	i = 0;	
	while(src[i])
	{
		i++;
	}

	str = (char*)malloc(i + 1);
	if(!str) { return (NULL); }

	i = 0;
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
	char test[] = "test";
	char* result = ft_strdup(test);

	if(result)
	{
		int i = 0;
		while(result[i])
		{
			i++;
		}
		write(1, result, i);
		free(result);
	}
	return (0);
}
