/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:00:17 by osredond          #+#    #+#             */
/*   Updated: 2024/02/24 23:11:34 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     *ft_rrange(int start, int end)
{
	int	*result;
	int	i;
	int	len;

	len = (end - start) + 1;
	i = 0;
	result = (int *)malloc(sizeof(int) * (len));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = end - i;
		i++;
	}
	return (result);
}
