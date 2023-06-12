/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:57:07 by abastida          #+#    #+#             */
/*   Updated: 2023/05/22 11:56:31 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int is_space(char *str)
{
	int i = 0;
	if (str[i] && (str[i] == ' ' || str[i] == '\t'))
		return (true);
	return(false);
}

void	rstr_capitalizer(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
}

int main (int ac, char **av)
{
	int i = 1;
	while (ac > i)
	{	rstr_capitalizer(av[i++]);
		write(1, "\n", 1);
	}
	if (ac == 1)
		write(1, "\n", 1);
	return (0);
}
