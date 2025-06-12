#include <unistd.h>

int verification_base_char(char c)
{
	return (c == '+' || c == '-' || c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f');
}

int ft_atoi_base(char *str, char *base)
{
	int len_base;
	int i;
	int j;
	int digit;
	int sign;
	int num;

	i = 0;
	len_base = 0;
	while(base[len_base])
	{
		if(verification_base_char(base[len_base]))
		{
			return (0);
		}
		len_base++;
	}
	if(len_base <= 1)
	{
		return (0);
	}
	i -= 1;
	while(++i < len_base)
	{
		j = i + 1;
		while(j < len_base)
		{
			if(base[i] == base[j]) { return (0); }
			j++;
		}
	}
	sign = 1;
	while(verification_base_char(*str)) { str++; }
	if(*str == '+' || *str == '-')
	{
		if(*str == '-')
		{
			sign = -1;
		}
		str++;
	}


	num = 0;
	while(*str)
	{
		digit = -1;
		i = -1;
		while(++i < len_base)
		{	
			if(base[i] == *str)
			{
				digit = i;
			}
		}
		if(digit == -1)
		{
			break;
		}
		num = num * len_base + digit;
		str++;
	}
	return (sign * num);
}

void ft_putchar(char c) { write(1, &c, 1); }

void convert_to_char(int value)
{
	char buffer[12];
	int i;
	long num;

	i = 0;
	num = value;
	if(num == 0)
	{	
		ft_putchar('0');
		return;
	}

	if(num < 0)
	{
		ft_putchar('-');
		num = -num;
	}

	while(num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	while(i--)
	{
		ft_putchar(buffer[i]);
	}
}

int main(void)
{
	char base[] = "0123456789";
	int result = ft_atoi_base("42", base);
	
	convert_to_char(result);
	ft_putchar('\n');
	
	return (0);
}
