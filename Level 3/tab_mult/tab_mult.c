/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:51:52 by osredond          #+#    #+#             */
/*   Updated: 2024/03/14 12:09:39 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	digitchar(int number)
{
	char *str = "0123456789";

	if (number > 9)
		digitchar(number / 10);
	write(1, &str[number % 10] ,1);
}

int	main(int argc, char**argv)
{
	int	number;
	int i;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		number = ft_atoi(argv[1]);
		while (i <= 9)
		{
			digitchar(i);
			write(1, " x ", 3);
			digitchar(number);
			write(1, " = ", 3);
			digitchar(i * number);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
