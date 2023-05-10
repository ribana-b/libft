/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b < ribana-b@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:20:57 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/04 01:24:16 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *n)
{
	int		num;
	int		sign;

	sign = 1;
	num = 0;
	while (*n == '\n' || *n == '\t' || *n == '\v' || *n == ' '
		|| *n == '\f' || *n == '\r')
	{
		n++;
	}
	if (*n == '+' || *n == '-')
	{
		if (*n == '-')
		{
			sign *= -1;
		}
		n++;
	}
	while (ft_isdigit(*n) && *n != '\0')
	{
		num = num * 10 + (*n - '0');
		n++;
	}
	return ((int)(num * sign));
}

/* //Testing
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
		  printf("atoi: %d\n", atoi("-2147.32"));
	printf("ft_atoi: %d\n", ft_atoi("-2147.32"));
		  printf("atoi: %d\n", atoi("-2147483648"));
	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
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