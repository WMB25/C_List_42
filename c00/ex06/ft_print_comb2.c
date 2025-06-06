#include <unistd.h>
#include <string.h>

void ft_print_comb2(void);

int main(void)
{
    ft_print_comb2();
    return (0);
}

void ft_print_comb2(void)
{
    int x, y;
    const char convertNum = '0';
    x = 0;
    while(x <= 98)
    {
        y = x + 1;
        while(y <= 99)
        {
            char colunOne[2] = {x / 10 + convertNum, x % 10 + convertNum};
            char colunTwo[2] = {y / 10 + convertNum, y % 10 + convertNum};

            write(1, colunOne, 2);
            write(1, " ", 1);
            write(1, colunTwo, 2);

            if(!(x == 98 && y == 99))
            {
                write(1, ", ", 2);
            }
            y++;
        }
        x++;
    }
}
