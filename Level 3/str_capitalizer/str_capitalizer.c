#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j] != '\0' && argv[i][j] != '\n')
			{
				if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\0'))
					argv[i][j] = argv[i][j] - 32;
				else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z' && argv[i][j + 1] != ' ')
					argv[i][j] = argv[i][j] + 32;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
