/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:39:00 by abastida          #+#    #+#             */
/*   Updated: 2023/01/23 10:05:18 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnum(int num)
{
	char number[10] = "0123456789";
	if (num > 9)
		putnum(num/10);
	write(1, &number[num % 10], 1);
}

int main(void)
{
	int num = 1;
	while(num <= 100)
	{
		if(num % 3 == 0 && num% 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(num % 3 == 0)
			write(1, "fizz", 4);
		else if(num % 5 == 0)
			write(1, "buzz", 4);
		else
			putnum(num);
		num++;
		write(1, "\n", 1);
	}
	return(0);
}
