/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:42:28 by osredond          #+#    #+#             */
/*   Updated: 2024/03/06 19:57:17 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int flag;
	char *str;
	if (argc == 2)
	{
		i = 0;
		str = argv[1];
		flag = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != '\0')
		{
			if ((str[i] == ' ' || str[i] == '\t') && flag == 0)
				flag = 1;
			if (!(str[i] == ' ' || str[i] == '\t'))
			{
				if (flag)
					write(1, " ", 1);
				flag = 0;
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
