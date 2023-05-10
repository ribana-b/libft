/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 22:59:46 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/08 02:16:15 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t bytes)
{
	char	*newstr;
	size_t	cont;

	cont = 0;
	if ((bytes + start > ft_strlen(s)))
	{
		bytes = ft_strlen(s) - start;
	}
	if (start >= ft_strlen(s))
	{
		return (ft_calloc(1, 1));
	}
	newstr = (char *)malloc((bytes + 1) * sizeof(char));
	if (!newstr)
	{
		return (0);
	}
	while (cont < bytes)
	{
		*(newstr + cont) = *(s + start + cont);
		cont++;
	}
	*(newstr + cont) = '\0';
	return (newstr);
}

/* //This is for testing
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "Hola/muy/buenos/dias";
	printf("%s", ft_substr("hola", 1, 4));
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