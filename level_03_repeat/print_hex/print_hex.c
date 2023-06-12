/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:04:18 by abastida          #+#    #+#             */
/*   Updated: 2023/06/09 10:24:17 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int num = 0;
	//while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	//	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

void print_hex(int num)
{
	char number[16] = "0123456789abcdef";
	if (num > 16)
		print_hex(num / 16);
	write(1, &number[num % 16], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
