/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:11:30 by osredond          #+#    #+#             */
/*   Updated: 2024/02/24 22:56:59 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_repeat(char *str, char c, int numb)
{
	int i;
	int count = 0;;
	i = 0;

	while (str[i] != '\0' && i < numb)
	{
		if (str[i] == c)
			count++;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && i <= numb && count == 0)
		   return (1);
		if (str[i] == c && i >= numb && count != 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int flag;
	char *str;
	char *str2;

	if (argc == 3)
	{
		i = 0;
		flag = 0;
		str = argv[1];
		str2 = argv[2];
		while (str[i] != '\0')
		{
			j = 0;
			while (str2[j] != '\0')
			{
				if (str2[j] == str[i])
				{
					if (ft_repeat(str, str[i], i) == 1)
					{
						write(1, &str[i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1 , "\n", 1);
	return (0);
}
