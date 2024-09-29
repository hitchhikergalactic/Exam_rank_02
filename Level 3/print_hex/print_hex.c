#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = result * 10 +(str[i] - '0');
		i++;
	}
	return (result);
}

void	print_hex(int dig)
{
	char hex[16] = "0123456789abcdef";

	if (dig >= 16)
		print_hex(dig / 16);
	write(1, &hex[dig % 16], 1);
}

int	main(int argc, char **argv)
{
	int	digit;

	if (argc == 2)
	{
		digit = ft_atoi(argv[1]);
		print_hex(digit);
	}	
	write(1, "\n", 1);
	return (0);
}
