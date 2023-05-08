/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:06:31 by abastida          #+#    #+#             */
/*   Updated: 2023/05/08 12:06:31 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>


void print_word(char *str, int pos)
{
	while(str[pos] && str[pos] != ' ' && str[pos] != '	')
	{
		write(1, &str[pos], 1);
		pos++;
	}
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}
void	last_word(char *str)
{
	int len = ft_strlen(str) - 1;
	while(str[len] && (str[len] == ' ' || str[len] == '	'))
		len--;
	while(len >= 0)
	{
		if((str[len] == ' ') || (str[len] == '	'))
		{
			print_word(str, len +  1);
			break ;
		}
		else if (len == 0 && str[len] != ' ' && str[len] !='	')
		{
			print_word(str, len);
		}
		len--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return(0);
}
