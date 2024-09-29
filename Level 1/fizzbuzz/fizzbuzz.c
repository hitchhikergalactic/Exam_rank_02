#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_writenumb(int numb)
{
	char	str[10] = "0123456789";

	if (numb > 9)
		ft_writenumb(numb / 10);
	write(1, &str[numb % 10], 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_writenumb(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
