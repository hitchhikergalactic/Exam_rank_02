/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:03:43 by osredond          #+#    #+#             */
/*   Updated: 2024/03/06 11:28:45 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	char *str;

	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != '\0')
		{
			if (str[i] != '_')
			{
				if (str[i - 1] == '_' && (str[i] >= 'a' && str[i] <= 'z'))
					str[i] = str[i] - 32;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
