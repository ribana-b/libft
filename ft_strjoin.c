/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:11:18 by ribana-b          #+#    #+#             */
/*   Updated: 2023/10/20 04:03:21 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *dst, const char *src)
{
	char	*str;
	int		index;
	int		index2;

	index = ft_strlen(dst);
	index2 = ft_strlen(src);
	str = (char *)malloc((index + index2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[index + index2] = '\0';
	while (index2-- > 0)
	{
		str[index + index2] = src[index2];
	}
	while (index-- > 0)
	{
		str[index] = dst[index];
	}
	return (str);
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
