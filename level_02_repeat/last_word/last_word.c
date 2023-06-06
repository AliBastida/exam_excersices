/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:27:33 by abastida          #+#    #+#             */
/*   Updated: 2023/06/05 13:12:57 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void print_word(char *str, int i)
{
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

void last_word(char *str)
{
	int i = ft_strlen(str) - 1;
	while ((i >= 0) && (str[i] == ' ' || str[i] == '\t'))
		i--;
	while (i >= 0)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			print_word(str, i + 1);
			break ;
		}
		else if (i == 0 && str[i] != ' ' && str[i] != '\t')
		{
			print_word(str, i);
			break ;
		}
		else
			i--;
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
