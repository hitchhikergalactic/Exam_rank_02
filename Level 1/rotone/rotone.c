/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:03:05 by osredond          #+#    #+#             */
/*   Updated: 2024/03/07 13:17:58 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char *str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while(str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'y')
				str[i] = str[i] + 1;
			else if (str[i] >= 'A' && str[i] <= 'Y')
				str[i] = str[i] + 1;
			else if (str[i] == 'z')
				str[i] = 'a';
			else if (str[i] == 'Z')
				str[i] = 'A';
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
