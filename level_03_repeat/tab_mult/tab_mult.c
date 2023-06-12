/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:42:44 by abastida          #+#    #+#             */
/*   Updated: 2023/06/09 13:06:32 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
int ft_atoi(char *str)
{
	int num = 0;
	int i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

void putnum(int num)
{
	char number[10] = "0123456789";
	if (num > 9)
		putnum(num / 10);
	write(1, &number[num % 10], 1);
}

void tab_mult(int num)
{
	int n = 1;
	int result;
	while (n <= 9)
	{
		putnum(n);
		write (1, " x ", 3);
		putnum(num);
		result = n * num;
		write(1, " = ", 3);
		putnum(result);
		write(1, "\n", 1);
		n++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		tab_mult(ft_atoi(av[1]));
		//putnum(INT_MAX);
	}
	write(1, "\n", 1);
	return (0);
}
