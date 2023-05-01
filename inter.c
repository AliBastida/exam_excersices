/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:51:35 by abastida          #+#    #+#             */
/*   Updated: 2023/05/01 18:29:46 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	look_for_char(char *str, char c, int i)
{
	while (str[i])
	{
		if(str[i] == c)
		{
			printf("c:%c\n", c);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return (i);
}
void inter(char *s1, char *s2)
{
	int i = -1;
	int j;
	int aux_counter = 0;
	char aux[126] = {0};

	if (i < ft_strlen(s1) - 1)
	{
		j = -1;
		while (j < ft_strlen(s2) - 1)
		{
			if((look_for_char(s1, s1[i], i) == 1) && (look_for_char(s2, s1[i], j) == 1))
			{
				aux[aux_counter++] = s1[i];
				printf("aux %s\n", aux);
			}
			++i;
			++j;
			printf("s1[i]:%c\n", s1[i]);
			printf("s2[j]%c\n", s2[j]);
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
