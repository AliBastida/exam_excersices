/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_prime_retry.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 09:13:32 by abastida          #+#    #+#             */
/*   Updated: 2023/06/07 10:11:55 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int num = 0;
	//gestionar espacios.
	while((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	//convertir char a char a int.
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

int is_prime(int num)
{
	int tester = num - 1;
	while (tester > 1)
	{
		if (num % tester == 0)
			return (0);
		else
			tester--;
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

void printnum(int num)
{
	char number[10] = "0123456789";
	if (num > 9)
		printnum(num/10);
	write(1, &number[num % 10], 1);
}

int main (int ac, char **av)
{
	if (ac != 2 || ft_atoi(av[1]) < 0)
		write(1, "0", 1);
	else
		printnum(sum_prime(ft_atoi(av[1])));
	write(1, "\n", 1);
	return(0);
}
