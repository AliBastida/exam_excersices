/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:08:17 by abastida          #+#    #+#             */
/*   Updated: 2023/04/25 14:35:42 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	rev_wstr(char *str)
{
	int i = 0;
	int j = 0;
	char *aux;
	while (str[i])
		i++;
	aux = (char *)calloc(sizeof(char), (i + 1));
	if (!aux)
		return ;
	//if((str[i] == ' ') || (str[i] == '	'))
	//	i--;
	i = i - 1;
	while (i >= 0 && (str[i]!= ' ' && str[i] != '	'))
	{
		aux[j] = str[i];
		if((str[i-1] == ' ') || (str[i-1] == '	'))
		{
			aux[j] = str[i];
			printf("str %s\n", str);
			printf("aux %s\n", aux);}
		--i;
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	//write(1, "\n", 1);
	return (0);
}
