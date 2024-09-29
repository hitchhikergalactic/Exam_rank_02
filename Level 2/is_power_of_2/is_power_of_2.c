#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	if (n == 1)
		return (1);
	else
		return (0);
}
