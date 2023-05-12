/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:30:03 by abastida          #+#    #+#             */
/*   Updated: 2023/05/12 13:30:03 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void expand_str(char *s1)
{
	int i = 0;
	while(*s1 && *s1 == ' ')
		s1++;
	while(s1[i])
	{
		if(s1[i] != ' ')
			write(1, &s1[i], 1);
		else if (s1[i] == ' ' && s1[i+1] == '\0' )
			break ;
		else if(s1[i] == ' ' && (s1[i + 1] != ' '))
			write (1, "   ", 3);
		i++;
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
		expand_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
