#include <unistd.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	
	if(!*to_find) { return str; }
	
	i = -1;
	while(str[++i])
	{
		int j = 0;
		while(str[i + j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if(!to_find[j])
		{
			return (&str[i]);
		}
	}
	return (0);
}

int main(void)
{
	char test[] = "testeOne";

	char* result = ft_strstr(test, "One");

	if(result)
	{
		int i = 0;
		while(result[i])
		{
			i++;
		}
		write(1, result, i);
	}
	else
	{
		write(1, "Não tem", 7);
	}
	return (0);
}
