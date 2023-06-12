/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:03:45 by abastida          #+#    #+#             */
/*   Updated: 2023/06/08 14:11:11 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void putnum(int num)
{
	char number[10] = "0123456789";
	if (num > 9)
		putnum(num/10);
	write(1, &number[num % 10], 1);
}

int main(int ac, char **av)
{
	(void) av;
	putnum(ac - 1);
	write(1, "\n", 1);
}
