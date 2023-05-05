/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:54:47 by abastida          #+#    #+#             */
/*   Updated: 2023/05/05 11:54:47 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
  int j;
  int i = 0;
  while (s1[i])
  {
    j = 0;
    while (s2[j])
    {
      if (s1[i] == s2[j])
        return ((char *)&s1[i]);
      j++;
    }
    i++;
  }
  return (NULL);
}

int main()
{
  char *s1 = "hola que tal";
  char *s2 = "que";
  printf("%p\n", ft_strpbrk(s1, s2));
  printf("%p\n", strpbrk(s1, s2));
  return(0);
}
