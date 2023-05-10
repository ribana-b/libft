/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 01:47:04 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/08 03:17:06 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	pos(const char *s1, const char *set, size_t cont)
{
	int	flag;

	flag = 1;
	if (cont == 0)
	{
		flag = 0;
	}
	while (ft_strchr(set, *(s1 + cont)))
	{
		if (flag == 0)
		{
			cont++;
		}
		else
		{
			cont--;
		}
	}
	return (cont);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1 ||!set)
	{
		return (0);
	}	
	if (!*s1)
	{
		return (ft_calloc(1, 1));
	}
	start = pos(s1, set, 0);
	end = pos(s1, set, ft_strlen(s1));
	return (ft_substr(s1, start, end - start + 1));
}

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