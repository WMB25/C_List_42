#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char* str)
{
	int size;

	size = 0;
	while(str[size])
	{
		size++;
	}
	return (size);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char* result;
	int i;
	int total_size;
	int pos;
	int size_sep;

	if(size == 0)
	{
		result = malloc(1);
		if(result) { result[0] = '\0'; }
		return (result);
	}

	i = 0;
	total_size = 0;
	while(i < size)
	{
		total_size += ft_strlen(strs[i++]);
	}
	
	size_sep = ft_strlen(sep);
        total_size += size_sep * (size - 1);

	result = malloc(total_size + 1);
	if(!result) { return (NULL); }

	pos = 0;
	i = 0;
	while(i < size)
	{
		char *corrent_str = strs[i];
		while(*corrent_str) { result[pos++] = *corrent_str++; }
	
		if(i < size - 1)
		{
			char* corrent_sep = sep;
			while(*corrent_sep) { result[pos++] = *corrent_sep++; }
		}
		i++;
	}
	result[pos] = '\0';
	return (result);
}

void ft_putstr(char* str)
{	
	if(!str) { return; }
	
	int i = 0;
	while(str[i])
	{
		write(1, &str[i++], 1);
	}
}

int main(void)
{
	int size = 3;
	char* strs[] = { "Hello", "world", "!" };
	char sep[] = ", ";
	char* result = ft_strjoin(size, strs, sep);

	ft_putstr(result);
	free(result);		

	return (0);
}
