/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:05:22 by abastida          #+#    #+#             */
/*   Updated: 2023/05/10 16:05:22 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}
void epur_str(char *str)
{
	int i = 0;
	int len = ft_strlen(str) - 1;
	
	while (str[i] == ' ')
		i++;
	while (str[len] == ' ' && len > i)
		--len;
	if (len == 0 && str[len] == ' ')
		write(1, "\n", 1);
	while (i <= len)
	{
		if (str[i] != ' ')
			write(1, &str[i++], 1);
		else
		{
			while (str[i] == ' ')
				i++;
			write(1, " ", 1);
		}
	}

}

int main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
