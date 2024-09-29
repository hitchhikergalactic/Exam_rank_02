/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:18:06 by osredond          #+#    #+#             */
/*   Updated: 2024/03/11 15:04:37 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char    **ft_split(char *str)
{
	int	i;
	int j;
	int k;
	char **split;

	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		k = 0;
		if (!(split[j] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
		{
			split[j][k] = str[i];
			i++;
			k++;
		}
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[j][k] = '\0';
		j++;
	}
	split[j] = NULL;
	return (split);
}
