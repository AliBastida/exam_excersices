/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:08:23 by abastida          #+#    #+#             */
/*   Updated: 2023/05/30 10:27:09 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void alpha_mirror(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i]>= 'A' && str[i] <= 'Z')
			str[i] = 'A' + 'Z' - str[i];
		if (str[i]>= 'a' && str[i] <= 'z')
			str[i] = 'a' + 'z' - str[i];
		write(1, &str[i], 1);
		i++;
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
	return (0);
}
