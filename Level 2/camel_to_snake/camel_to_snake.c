#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	char *str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z' && i == 0)
				str[i] = str[i] + 32;
			else if (str[i] >= 'A' && str[i] <= 'Z' && i != 0)
			{
				write(1, "_", 1);
				str[i] = str[i] + 32;
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
