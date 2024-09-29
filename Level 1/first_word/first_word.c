/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:06:34 by osredond          #+#    #+#             */
/*   Updated: 2024/03/07 18:18:43 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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
		while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
