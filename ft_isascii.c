/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:55:57 by ribana-b          #+#    #+#             */
/*   Updated: 2023/06/18 15:18:21 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127));
}

/* //This is for testing
#include <stdio.h>

int	main(void)
{
	printf("ASCII: %d\n", ft_isascii(0));
	printf("Non ASCII: %d\n", ft_isascii(200));
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
