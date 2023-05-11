/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:05:05 by abastida          #+#    #+#             */
/*   Updated: 2023/05/11 18:54:46 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	expand_str(char *s1)
{
	int i = 0;
	while (s1[i] && s1[i] == ' ')
		i++;
	while (s1[i])
	{
		if (s1[i] != ' ')
		{
			if(s1[i - 1] == ' ' && i)
				write(1, "   ", 3);
			write(1, &s1[i], 1);
		}
		i++;
	}

}

/*void expand_str(char *s1)
{
	int i = 0;
	while(s1[i] && (s1[i] == ' ' || s1[i] == '	'))
		i++;
	while(s1[i])
	{
		if(((s1[i] == ' ') ||(s1[i] == '	')) && ((s1[i+1] != ' ' && s1[i+1] != '	')))
			write(1, "   ", 3);
		if (s1[i] != ' ' || s1[i] != '	')
			write(1, &s1[i], 1);
		i++;
	}
}
*/
int	main(int ac, char **av)
{
	if (ac == 2)
		expand_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
