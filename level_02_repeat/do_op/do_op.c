/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:23:40 by abastida          #+#    #+#             */
/*   Updated: 2023/05/30 11:48:04 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	do_op(char *str1, char c, char *str2)
{
	int s1 = atoi(str1);
	int s2 = atoi(str2);
	if (c == '+')
		printf("%d", (s1) + (s2));
	if (c == '-')
		printf("%d", (s1) - (s2));
	if (c == '*')
		printf("%d", (s1) * (s2));
	if (c == '/')
		printf("%d", (s1) / (s2));
	if (c == '%')
		printf("%d", (s1) % (s2));
}

int main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], *av[2], av[3]);
	printf ("\n");
	return (0);
}
