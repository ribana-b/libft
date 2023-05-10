/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:22:18 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/06 11:08:48 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *vstr, int value, size_t bytes)
{
	char	*str;

	str = (char *)vstr;
	while (bytes--)
	{
		*str++ = (unsigned char)value;
	}
	return (vstr);
}

/* //This is for testing
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hola Mundo";
	char	str2[] = "Hola Mundo";

	printf("String 1 after memset: %s\n", str);
	memset(str, 42, 3);
	printf("String 1 after memset: %s\n", str);
	printf("String 2 before ft_memset: %s\n", str2);
	ft_memset(str2, 42, 3);
	printf("String 2 after ft_memset: %s\n", str2);
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