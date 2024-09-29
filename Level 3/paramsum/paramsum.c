/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:03:24 by osredond          #+#    #+#             */
/*   Updated: 2024/03/23 20:27:07 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	printarg(int arg)
{
	char *str = "0123456789";
	if (arg > 9)
		printarg(arg / 10);
	write(1, &str[arg % 10], 1);
}

int main(int argc, char **argv)
{
	(void)argv;

	if (argc == 1)
		write(1, "0", 1);
	else
		printarg(argc - 1);
	write(1, "\n", 1);
	return (0);
}
