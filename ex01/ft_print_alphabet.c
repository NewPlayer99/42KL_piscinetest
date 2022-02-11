#include <unistd.h>

void ft_print_alphabet(void)
{
	for(char c='a'; c <= 'z'; c++)
	{
		write(1, &c, 1);
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return 0;
}
