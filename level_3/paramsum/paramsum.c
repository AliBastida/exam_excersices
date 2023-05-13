/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:55:35 by abastida          #+#    #+#             */
/*   Updated: 2023/05/13 15:55:35 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void putnumber(int num)
{
	char number[10] = "0123456789";
	if (num > 9)
		putnumber(num / 10);
	write (1, &number[num % 10], 1);
}

int main(int ac, char **av)
{
	(void) av;
	putnumber(ac - 1);
	write(1,"\n",1);
	return (0);
}
