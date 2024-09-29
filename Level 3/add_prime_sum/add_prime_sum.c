#include <unistd.h>

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int number;
	int sign;

	i = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * sign);
}

int	is_prime(int numb)
{
	int i = 2;

	if (numb <= 1)
		return (0);
	while (i * i <= numb)
	{
		if (numb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	printint(int sum)
{
	char *str = "0123456789";

	if (sum > 9)
		printint(sum / 10);
	write(1, &str[sum % 10], 1);
}

int main(int argc, char **argv)
{
	int numb;
	int sum;
	if (argc != 2)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
	else
	{
		sum = 0;
			numb = ft_atoi(argv[1]);
		if (numb < 0)
		{
			write(1, "0", 1);
			write(1, "\n", 1);
			return (0);
		}
		while (numb > 0)
		{
			if (is_prime(numb))
				sum = sum + numb;
			numb--;
		}
		printint(sum);
		write(1, "\n", 1);
	}
	return (0);
}
