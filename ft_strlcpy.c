/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:30:53 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/10 16:10:04 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t bytes)
{
	size_t	cont;

	cont = 0;
	if (bytes == 0)
	{
		return (ft_strlen(src));
	}
	while (cont < bytes - 1 && *(src + cont) != '\0')
	{
		*(dest + cont) = *(src + cont);
		cont++;
	}
	*(dest + cont) = '\0';
	return (ft_strlen(src));
}

/* //This is for testing *NOTE: gcc ft_strlcpy.c ft_strlen.c -o a.out -lbsd
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	str[] = "Holaadios";
	char	str2[] = "Holaa";
	char	ft_str[] = "Holaadios";
	char	ft_str2[] = "Holaa";
	printf("strlcpy: %ld\n", strlcpy(str, str2, 5));
	printf("str: %s\nstr2: %s\n", str, str2);
	printf("ft_strlcpy: %ld\n", ft_strlcpy(ft_str, ft_str2, 5));
	printf("ft_str: %s\nft_str2: %s\n", ft_str, ft_str2);
} */
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