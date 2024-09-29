#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	numb;

	if (argc == 2)
	{
		i = 2;
		numb = atoi(argv[1]);
		if (numb == 1)
			printf("1");
		while (numb >= i)
		{
			if (numb % i == 0)
			{
				printf("%d", i);
				if (numb == i)
					break;
				printf("*");
				numb = numb / i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
