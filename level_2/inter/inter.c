/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:45:08 by abastida          #+#    #+#             */
/*   Updated: 2023/05/07 18:23:12 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int	look_for_double(char *s1, char c, int len)
{
	while(s1[len])
	{
		if(s1[len] == c)
			return (true);
		len--;
	}
	return(false);
}

void	inter(char *s1, char *s2)
{
  int i;
  char saved[256] = {0};
  int saved_counter = 0;
  while(*s1)
  {
    i = 0;
    while(s2[i])
    {
      if(*s1 == s2[i])
        {
		  saved[saved_counter] = *s1;
          saved_counter++;
		  printf("saved:%s\n", saved);
        }
   		i++;
    }
	s1++;
  }
  saved_counter = 0;
  while(saved[saved_counter])
  {
	if (look_for_double(saved, saved[saved_counter], saved_counter - 1) == false)
		printf("%c", saved[saved_counter]);
	saved_counter++;
  }
}

int main(int ac, char **av)
{
	if(ac == 3)
  		inter(av[1], av[2]);
	write(1, "\n", 1);
  return 0;
}
