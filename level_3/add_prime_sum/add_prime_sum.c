/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:39:12 by abastida          #+#    #+#             */
/*   Updated: 2023/05/10 11:39:12 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int num = 0;
	int sign = 1;
	int i = 0;
	
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i++] - '0';
	}
	return (num * sign);
}

void	putnmbr(int num)
{
	char number[10] = "0123456789";
	if (num > 9)
		putnmbr(num/10);
	write(1, &number[num%10], 1);
}

int is_prime(int num)
{
	int test;

	test = num -1;
	while (test > 1)
	{
		if (num % test == 0)
			return (0);
		test--;
	}
	return (1);
}

int	prime_sum(int num)
{
	int sum = 0;
	
	if(num == 1)
		sum = 1;
	while (num > 1)
	{
		if (is_prime(num) == 1)
		{
			sum = sum + num;
		}
		num--;
	}
	return (sum);
}


int main (int ac, char **av)
{
	if (ac == 2)
		putnmbr(prime_sum(ft_atoi(av[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return(0);
}
