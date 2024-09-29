#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int len;
	char *str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i] != '\0')
			i++;
		while (i != 0)
		{
			i--;
			write(1, &str[i], 1);
		}
	}
	write(1, "\n",1);
	return (0);
}
