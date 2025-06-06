#include <unistd.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	if(n == 0){ return (0); }
	i = 0;
	while((i < n - 1) && (s1[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}

	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int main(void)
{
	char str[] = "One";
	char str_two[] = "One";
	char* text[] = { "Iguais", "str1 Maior", "str2 Maior" };
	int i = 0;

	int result = ft_strncmp(str, str_two, 3);
	int out = (result == 0) ? 0 : (result > 0) ? 1 : 2; 
	
	while(text[out][i] != '\0')
	{
		i++;
	}
	write(1, text[out], i);	
	
	return (0);
}
