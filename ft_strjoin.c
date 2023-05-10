/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:11:18 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/06 12:14:16 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*newstr;
	size_t		cont;
	size_t		cont2;

	cont = 0;
	cont2 = 0;
	newstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
	{
		return (0);
	}
	while (cont < ft_strlen(s1))
	{
		*(newstr + cont) = *(s1 + cont);
		cont++;
	}
	while (cont < (ft_strlen(s1) + ft_strlen(s2)))
	{
		*(newstr + cont) = *(s2 + cont2);
		cont++;
		cont2++;
	}
	*(newstr + cont) = '\0';
	return (newstr);
}

/* //This is for testing
#include <stdio.h>
int	main(void)
{
	char	s1[] = "hola";
	char	s2[] = "adios";

	printf("a%s", ft_strjoin(s1, s2));
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