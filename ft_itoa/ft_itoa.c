/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:24:50 by abastida          #+#    #+#             */
/*   Updated: 2023/05/22 13:01:38 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int length(int n)
{
	int len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n= n/10;
		len++;
	}
	return(len);
}

char *ft_itoa(int nb)
{
	int len = length(nb);
	char *number;
	unsigned int num = nb;
	number = (char *)malloc(sizeof(char) * len + 1);
	number[len] = '\0';
	if (num == 0)
		number[len - 1] = '0';
	if (nb < 0)
	{
		number[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		len--;
		number[len] = num % 10 + '0';
		num = num / 10;
	}
	return (number);
}

int main ()
{
	int n = INT_MIN;
	printf("%d\n", length(n));
//	printf("%s\n", ft_itoa(n));
	return (0);
}
