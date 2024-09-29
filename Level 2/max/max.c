/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:23:10 by osredond          #+#    #+#             */
/*   Updated: 2024/03/04 19:29:13 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int numb;

	numb = tab[i];
	while (i <= len)
	{
		if (numb < tab[i])
			numb = tab[i];
		i++;
	}
	return (numb);
}
