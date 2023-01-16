/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:16:25 by abastida          #+#    #+#             */
/*   Updated: 2023/01/16 16:48:32 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int num = 0;
	int sign = 1;
	int i = 0;
	while((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if(str[i] == '-')
		sign = -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(*str >= 48 && *str <= 57)
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return(num * sign);
}

void	putnum(int num)
{
	char new_num[10] = "0123456789";
	if(num > 9)
		putnum(num/10);
	write(1, &new_num[num%10], 1);
}

void	tab_mult(int x)
{
	int n = 1;
	int y = 0;
	while(9 >= n)
	{
		y = n * x;
		putnum(n);
		write(1, " x " , 3);
		putnum(x);
		write(1, " = ", 3);
		putnum(y);
		write(1, "\n", 1);
		n++;
	}
	write(1, "\n", 1);
}
int	main(int ac, char **av)
{
	int num = 0;

	if(ac == 2)
	{
		num = ft_atoi(av[1]);
		tab_mult(num);
	}
	write(1, "\n", 1);
	return(0);
}
