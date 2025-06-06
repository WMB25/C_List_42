#include <unistd.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1 - s2);
}

int main(void)
{
        char arr[] = "test";
        char arr_two[] = "One";
        
        char* text[3] = {"Iguais", "Strings um  e maior que a dois!", "String dois e menor que a Um!"};

        int i = 0;
        int result = ft_strcmp(arr, arr_two);

	int out = (result == 0) ? 0 : (result > 0) ? 1 : 2;

	while(text[out][i] != '\0')
	{
		i++;
	}
	write(1, text[out], i);

        return (0);
}
