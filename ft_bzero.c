/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 06:22:48 by ribana-b          #+#    #+#             */
/*   Updated: 2023/04/27 16:59:52 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *vstr, size_t bytes)
{
	ft_memset(vstr, 0, bytes);
}

/* //This is for testing
#include <stdio.h>

int	main(void)
{
	char str[] = "Hola Mundo";
	size_t cont = 0;
	size_t size = ft_strlen(str);
	ft_bzero(str, 3);
	printf("%s\n", str);
	while (cont++ < size)
		printf("%c", str[cont]);
	printf("\n");
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