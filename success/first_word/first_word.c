/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:21:30 by abastida          #+#    #+#             */
/*   Updated: 2023/01/11 20:18:24 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	first_word(char *str)
{
	int	i;

	i = 0;
	while(str[i] && (str[i] == ' ' || str[i] == '	'))
			i++;
	while(str[i] && (str[i] != ' ' && str[i] != '	'))
		{
			write(1, &str[i], 1);
			i++;
		}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		first_word(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return(0);
}
