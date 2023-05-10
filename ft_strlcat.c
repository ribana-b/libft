/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 01:39:58 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/10 16:29:01 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t bytes)
{
	size_t	destlen;
	size_t	srclen;
	size_t	cont;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	cont = 0;
	if (destlen >= bytes)
	{
		return (srclen + bytes);
	}
	while (*(src + cont) && ((destlen + cont) < (bytes - 1)))
	{
		*(dest + destlen + cont) = *(src + cont);
		cont++;
	}
	*(dest + destlen + cont) = '\0';
	return (destlen + srclen);
}

/* //This is for testing *NOTE: gcc ft_strlcat.c ft_strlen.c -o a.out -lbsd
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	str[] = "Hola";
	char	str2[] = "mundo";
	printf("strlcat: %lu\n", strlcat(str, str2, 9));
	printf("str: %s\n", str);
}

int	main(void)
{
	char	str[] = "Hola";
	char	str2[] = "mundo";
	printf("ft_strlcat: %lu\n", ft_strlcat(str, str2, 9));
	printf("str: %s\n", str);
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