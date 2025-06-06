#include <unistd.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int len_dest;
	int len_src;
	int i;

	len_src = 0;
	while(src[len_src])
	{
		len_src++;
	}
	
	len_dest = 0;
	while(len_dest < size && dest[len_dest])
	{
		len_dest++;
	}

	if(len_dest == size)
	{
		return (size + len_src);
	}

	i = 0;
	while(src[i] && i < size - len_dest - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

int main(void)
{
	char str[20] = "Test";
	
	int result = ft_strlcat(str, "e", 20);

	int i = 0;
	while(str[i])
	{
		i++;
	}

	write(1, str, i);
	return (0);
}
