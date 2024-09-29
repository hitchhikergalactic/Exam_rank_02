#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int flag;
	char *str;
	if (argc == 2)
	{
		i = 0;
		flag = 0;
		str = argv[1];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != '\0')
		{
			if ((str[i] == ' ' || str[i] == '\t') && flag == 0)
				flag = 1;
			if (!(str[i] == ' ' || str[i] == '\t'))
			{
				if (flag)
					write(1, "   ", 3);
				flag = 0;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
