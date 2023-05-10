/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b < ribana-b@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:08:53 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/02 16:07:43 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t bytes)
{
	size_t	needlelen;

	needlelen = ft_strlen(needle);
	if (!*needle)
	{
		return ((char *)haystack);
	}
	if (!*haystack && *needle)
	{
		return (0);
	}
	while (needlelen <= bytes && bytes--)
	{
		if (ft_strncmp(haystack, needle, needlelen) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
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