#include <stdlib.h>

int ft_strlen(char* str)
{
    int size = 0;
    while(str[size]) 
        size++;
    return (size);
}

int verify_space(char c)
{
    return (c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f' || c == ' ');
}

int verify_valid_base(char* base)
{
    int i = 0;
    int j;

    while(base[i])
    {
        if(base[i] == '+' || base[i] == '-' || verify_space(base[i])) 
            return (0);
        j = i + 1;
        while(base[j])
        {
            if(base[i] == base[j]) 
                return (0);
            j++;
        }
        i++;
    }
    return (i >= 2);
}

int char_to_value(char c, char* base)
{
    int i = 0;
    while(base[i])
    {
        if(c == base[i]) 
            return i;
        i++;
    }
    return (-1);
}

int ft_atoi_base(char* str, char* base)
{
    int sign = 1;
    int result = 0;
    int base_len;
    int digit;

    if(!verify_valid_base(base)) 
        return (0);

    base_len = ft_strlen(base);

    while(verify_space(*str)) 
        str++;

    // Processar sinais
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }

    while(*str)
    {
        digit = char_to_value(*str, base);
        if(digit == -1) 
            break;
        result = result * base_len + digit;
        str++;
    }
    return (result * sign);
}

char* convert_number(int nbr, char* base)
{
    int base_len = ft_strlen(base);
    int len = 0;
    long temp;
    char* result;
    int i;    

    if(nbr == 0) 
    {
        result = malloc(2);
        if(!result) 
            return NULL;
        result[0] = base[0];
        result[1] = '\0';
        return (result);
    }

    // Usamos long para evitar overflow com INT_MIN
    temp = (nbr < 0) ? -(long)nbr : (long)nbr;

    // Calcula o comprimento da string resultante
    long temp_len = temp;
    while (temp_len)
    {
        len++;
        temp_len /= base_len;
    }
    if (nbr < 0)
        len++; // Para o sinal negativo

    result = malloc(len + 1);
    if(!result) 
        return (NULL);
    result[len] = '\0';

    i = len - 1;
    while (temp)
    {
        result[i--] = base[temp % base_len];
        temp /= base_len;
    }

    if (nbr < 0)
        result[0] = '-';

    return (result);
}