#include "ft.h"

void ft_putchar(char c) 
{
    write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_putstr(char *str) 
{
    while (*str) 
    {
        ft_putchar(*str);
        str++;
    }
}

int ft_strlen(char *str) 
{
    int len;
    
    len = 0;
    while (str[len]) { len++; }
    return (len);
}

int ft_strcmp(char *s1, char *s2) 
{
    while (*s1 && *s2 && *s1 == *s2) 
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
