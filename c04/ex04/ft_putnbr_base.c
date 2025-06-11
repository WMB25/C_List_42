#include <unistd.h>

int valid_base(char *base)
{
    if (!base || !base[0] || !base[1]) return 0;
    
    int i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-') return 0;
        
        int j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j]) return 0;
	    j++;
        }
        i++;
    }
    return 1;
}

void ft_putnbr_base(int nbr, char *base)
{
    if (!valid_base(base)) return;

    long n_long;
    if (n < 0)
    {
        write(1, "-", 1);
        n_long = (long)nbr * -1;
    }
    else
        n_long = (long)nbr;

    int base_len = 0;
    while (base[base_len]) base_len++;

    if (n_long == 0)
    {
        write(1, &base[0], 1);
        return;
    }

    char buffer[32];
    int index = 0;
    while (n_long > 0)
    {
        long rem = n_long % base_len;
        buffer[index++] = base[rem]; 
	n_long /= base_len;
    }

    while (index > 0)
        write(1, &buffer[--index], 1);
}

int main(void)
{
   
    ft_putnbr_base(42, "0123456789");
    write(1, "\n", 1);
      
    return 0;
}
