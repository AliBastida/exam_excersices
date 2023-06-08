/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:10:16 by abastida          #+#    #+#             */
/*   Updated: 2023/06/08 11:50:15 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void hidenp(char *s1, char *s2)
{
	int j = 0;
	while (*s1 && s2[j])
	{
		if (*s1 == s2[j])
			s1++;
		j++;
	}
	if (!*s1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
