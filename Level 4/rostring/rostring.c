/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:13:57 by osredond          #+#    #+#             */
/*   Updated: 2024/03/11 18:56:09 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int start;
    int end;
    int flag;
	char *str;

    flag = 0;
    if (argc > 1 && argv[1][0])
    {
		str = argv[1];
        i = 0;
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        start = i;
        while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
            i++;
        end = i;
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        while(str[i])
        {
            while ((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == '\t' && str[i + 1] == '\t'))
                i++;
            if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] == '\0')
                flag = 0;
			else if (str[i] == ' ' || str[i] == '\t')
                flag = 1;

            write(1, &str[i], 1);
            i++;
        }
        if (flag == 1)
            write(1, " ", 1);
        while (start < end)
        {
            write(1, &str[start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
