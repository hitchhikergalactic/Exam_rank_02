/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:23:30 by osredond          #+#    #+#             */
/*   Updated: 2024/03/18 17:15:19 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int len;
	char *str;
	char *s2;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		str = argv[1];
		s2 = argv[2];
		while (str[len] != '\0')
			len++;
		while (i < len && s2[j] != '\0')
		{
			if (str[i] == ' ')
				i++;
			if (str[i] == s2[j])
			{
				j++;
				i++;
			}
			else
				j++;
		}
		if (i == len)
			ft_putchar(str);
		else
		{
			write(1, "\n", 1);
			return (0);
		}
	}
	write(1, "\n", 1);
	return (0);
}
