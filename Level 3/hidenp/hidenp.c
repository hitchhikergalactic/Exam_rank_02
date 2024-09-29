#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;
	char	*s1;
	char	*s2;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		j = 0;
		len = 0;
		while (s1[len] != '\0')
			len++;
		while (s1[i] != '\0' && s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				i++;
				len--;
			}
			j++;
		}
		if (len == 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
