/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:05:52 by osredond          #+#    #+#             */
/*   Updated: 2024/03/22 12:51:01 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int aux;
	int len;
	int i = 0;

	len = size;
	while (i < (len - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
			i++;
	}
}

/*int main(void)
{
	 int tab[8] = {-0, 0, +0, 5, 2, -3, 14, -5};
	 unsigned int size = 8;
	 sort_int_tab(tab, size);
	 unsigned int i = 0;
	 while (i < size)
	 {
		 printf("%d ", tab[i]);
		 i++;
	 }
	 return (0);
}*/
