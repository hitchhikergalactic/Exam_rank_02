/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:43:06 by osredond          #+#    #+#             */
/*   Updated: 2024/03/09 13:10:33 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int repeat(char *str, char c, int posit)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && i == posit)
			return (0);
		else if (str[i] == c && i != posit)
			return (1);
		i++;
	}
	return (0);
}

int	stayone(char *str, char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	char *str;
	char *s2;
	if (argc == 3)
	{
		i = 0;
		str = argv[1];
		s2 = argv[2];
		while (str[i] != '\0')
		{
			if (repeat(str, str[i], i) == 0)
				write(1, &str[i], 1);
			i++;
		}
		j = 0;
		while (s2[j] != '\0')
		{
			if (stayone(str, s2[j]) == 0)
			{
				if (repeat(s2, s2[j], j) == 0)
					write(1, &s2[j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
