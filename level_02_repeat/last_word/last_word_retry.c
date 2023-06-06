/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word_retry.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:39:14 by abastida          #+#    #+#             */
/*   Updated: 2023/06/06 11:06:04 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_word(char *s, int pos)
{
	while(s[pos])
	{
		if (s[pos] != ' ' && s[pos] != '\t')
			write(1, &s[pos], 1);
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
void last_word(char *str)
{
	int i = ft_strlen(str) - 1;
	while (str[i] && (i >= 0) && (str[i] == ' ' || str[i] == '\t'))
		i--;
	while (i >= 0)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			write_word(str, i+1);
			break ;
		}
		else if (i == 0 && str[i] != ' ' && str[i] != '\t')
		{
			write_word(str, i);
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
