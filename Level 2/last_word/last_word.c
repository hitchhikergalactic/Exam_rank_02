/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:19:44 by osredond          #+#    #+#             */
/*   Updated: 2024/03/06 17:38:23 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	len;
	int	start;
	int	z;
	char *str;

	if (argc == 2)
	{
		str = argv[1];
		len = ft_strlen(str);
		while (str[i])
		{
			if (str[i] == ' ')
				z++;
			i++;
		}
		if (z == len)
		{
			write(1, "\n", 1);
			return (0);
		}
		while (str[len] == ' ' || str[len] == '\0')
			len--;
		i = len;
		while (str[i] != ' ')
			i--;
		start = i + 1;
		while (str[start] != ' ' && str[start] != '\0')
		{
			write(1, &str[start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
