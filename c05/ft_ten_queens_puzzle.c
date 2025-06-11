#include <unistd.h>
#define SIZE_BOARD 10

int ft_abs(int value_atack)
{
	if(value_atack < 0)
	{
		return (-value_atack);
	}
	return (value_atack);
}


int move_safe(int col, int row, int* board)
{
	int i;

	i = 0;
	while(i < col)
	{
		if(board[i] == row || ft_abs(col - i) == ft_abs(row - board[i])) { return (0); }

		i++;
	}
	return (1);
}

int ft_strlen(char* str)
{
	int size;

	size = 0;
	while(str[size])
	{
		size++;
	}
	return (size);
}

void solve(int col, int* board, int* count)
{
	if(col == SIZE_BOARD) 
	{
		int i;
		char buffer_move[SIZE_BOARD + 1];
		
		i = 0;
		while(i < SIZE_BOARD)
		{
			buffer_move[i] = board[i] + '0';
			i++;	
		}
		buffer_move[i] = '\n';
		int size_buffer;

		size_buffer = ft_strlen(buffer_move);
		write(1, buffer_move, size_buffer);
		(*count)++;
		return;
	}
	int row;

	row = 0;
	while(row < SIZE_BOARD)
	{
		if(move_safe(col, row, board))
		{
			board[col] = row;
			solve(col + 1, board, count);
		}
		row++;
	}
}

int ft_ten_queens_puzzle(void)
{
	int board[SIZE_BOARD];
	int count = 0;

	solve(0, board, &count);
	return (count);
}

int main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
