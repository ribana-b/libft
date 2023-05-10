/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:47:57 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/06 11:36:32 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	cont;

	cont = 0;
	while (*(char *)(str + cont) != 0)
	{
		if (*(char *)(str + cont) == (char)c)
		{
			return ((char *)str + cont);
		}
		cont++;
	}
	if ((char)c == '\0')
	{
		return ((char *)str + cont);
	}
	return (0);
}

/* char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str++)
			return (NULL);
	}
	return ((char *)str);
}
*/
/*
//This is for testing
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "teste";
	printf("%p", ft_strchr(str, 'e'));
	printf("%p", ft_strchr(str, '\0'));
	printf("%p", strchr(str, 'e'));
	printf("%p", strchr(str, '\0'));
}
*/
/*
     RRRRR                            
   RRR   RRR                          
  RRR     RRR                         
  RR      RRRRRRRRRRRRRRRR            
  RRR     RRRR          RRRRRR        
   RRR    RRR               RRR       
     RRRRRRRR               RRRR      
          RRR            RRRRR        
          RRR            RRR          
          RRR          RRRR           
         RRR       RRRRR              
         RRRRRRRRRRRRRR               
       RRRR          RRRR             
      RRRR             RRR            
     RRRR               RRR           
    RRR                  RRR     RRRRR
  RRRR                    RRRRRRRR    
*/