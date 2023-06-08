/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:14:11 by abastida          #+#    #+#             */
/*   Updated: 2023/06/07 11:54:03 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

int is_space(char *str, int i)
{
	if(str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
		return (1);
	else
		return (0);
}

void epur(char *str)
{
	int i = 0;
	while (*str && (*str == ' ' || *str == '\t'))
		str++;
	while (str[i])
	{
		if (is_space(str, i) == 0)
			write(1, &str[i], 1);
		else if ((is_space (str, i) == 1) && is_space(str, i+1) == 0)
			write(1, "   ", 3);
		i++;
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
		epur(av[1]);
	write(1, "\n", 1);
	return (0);
}
