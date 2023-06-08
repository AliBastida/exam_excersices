/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_prime.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:58:31 by abastida          #+#    #+#             */
/*   Updated: 2023/06/06 13:53:14 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int num = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

int is_prime(int num)
{
	int test = num - 1;
	while (test > 1)
	{
		if (num % test == 0)
			return (0); // no es primo.
		else
			test--;
	}
	return (1);
}

int sum_prime(int num)
{
	int sum = 0;
	if (num == 1)
		sum = 1;
	while (num > 1)
	{
		if (is_prime(num) == 1)
			sum = sum + num;
		num--;
	}
	return (sum);
}

void putnum(int num)
{
	char number[10] = "0123456789";
	if(num > 9)
		putnum(num/10);
	write(1, &number[num%10], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_atoi(av[1]) < 0)
			return (0);
		else
			putnum(sum_prime(ft_atoi(av[1])));
	}
	write(1, "\n", 1);
	return (0);
}
