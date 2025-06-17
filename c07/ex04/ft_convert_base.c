#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int verify_valid_base(char* base);
int ft_atoi_base(char* str, char* base);
char* convert_number(int nbr, char* base);

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int num;
    char* result;

    if(!verify_valid_base(base_from) || !verify_valid_base(base_to)) 
        return (NULL);

    num = ft_atoi_base(nbr, base_from);
    result = convert_number(num, base_to);
    return (result);
}

int main(void)
{
	char* result = ft_convert_base(" -42", "0123456789", "01");
	printf("Resultado %s", result);
	free(result);
	return (0);
}
