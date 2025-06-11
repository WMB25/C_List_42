#include <unistd.h>

int ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;

	while(*str <= 32)
	{
		str++;
	}

	while(*str == '-' || *str == '+')
	{
		if(*str == '-')
		{
			sign *= -1;
		}
		str++;
	}

	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

char *Convert_num(int num)
{
	static char buffer[12];
	int i;
	int is_negative;
	long n;

	i = 0;
	is_negative = 0;
	n = num;
	
	if(n == 0) { buffer[i++] = '0'; }

	if(n < 0)
	{
		is_negative = 1;
		n = -n;
	}


	while(n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	if(is_negative) { buffer[i++] = '-'; }
	
	buffer[i] = '\0';

	int start = 0;
	int end = i - 1;
	
	while(start < end)
	{
		char temp = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = temp;
		start++;
		end--;
	}

	return (buffer);
}

int StrLen(char* str)
{
	int size;
	
	size = 0;
	while(str[size]) { size++; }

	return (size);
}

int main(void)
{
	char num_str[] = "--+54321";
	int num = ft_atoi(num_str);
	char* converted = Convert_num(num);
	int len = StrLen(converted);

	write(1,converted, len);
	write(1, "\n", 1);

	return (0);
}
