/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:44:06 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/06 12:09:40 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t bytes)
{
	char	*str;
	char	*str2;

	str = (char *)dest;
	str2 = (char *)src;
	if (str > str2)
	{
		while (bytes--)
		{
			*(str + bytes) = *(str2 + bytes);
		}
	}
	else
	{
		ft_memcpy(str, str2, bytes);
	}
	return (dest);
}

/* //This is for testing

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hola";
	char	str2[] = "Hola muy buenos dias";
	char	str3[] = "Ok";
	printf("ft_memmove: %p\n", ft_memmove(str+2, str, 3));
	printf("   memmove: %p\n", memmove(str+2, str, 3));
	printf("ft_memmove: %p\n", ft_memmove(str2, str3, 3));
	printf("   memmove: %p\n", memmove(str2, str3, 3));
	printf("ft_memmove: %p\n", ft_memmove(str3, str2, 3));
	printf("   memmove: %p\n", memmove(str3, str2, 3));
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
