/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:19:24 by abastida          #+#    #+#             */
/*   Updated: 2023/06/13 12:19:24 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int do_op(int n1, char c, int n2)
{
	int res = 0;;
	if (c == '+')
		res = n1 + n2;
	if (c == '-')
		res = n1 - n2;
	if (c == '*')
		res = n1 * n2;
	if (c == '/')
		res = n1 / n2;
	if (c == '%' )
		res = n1 % n2;
	printf("%d", res);
	return (res);
}



int main(int ac, char **av)
{
	if (ac == 4)
		do_op(atoi(av[1]), *av[2], atoi(av[3]));
	printf("\n");
	return (0);
}
