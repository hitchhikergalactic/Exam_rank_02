#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	printchar(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	char *str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				printchar(str[i], str[i] + 1 - 'a');
			else  if (str[i] >= 'A' && str[i] <= 'Z')
				printchar(str[i], str[i] + 1 - 'A');
			else
				write(1, &str[i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
