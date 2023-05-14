/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:29:17 by abastida          #+#    #+#             */
/*   Updated: 2023/05/14 12:03:12 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr_capitalizer(char *s1)
{
	int i = 0;

	while ((*s1) && (*s1 == ' ' || *s1 == '	'))
			s1++;
	while (s1[i])
	{
		if(s1[i] >= 'A' && s1[i] <= 'Z')
			s1[i] = s1[i] + 32;
		if (s1[i] >= 'a' && s1[i] <= 'z' && ((s1[i + 1] == ' ') || (s1[i + 1] == '	') || (s1[i + 1] == '\0')))
			s1[i] = s1[i] - 32;
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
}


int main(int ac, char **av)
{
	int i = 1;
	while (ac > i)
	{
		rstr_capitalizer(av[i]);
			i++;
	}
	write(1, "\n", 1);
	return (0);
}
