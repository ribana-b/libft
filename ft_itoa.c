/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:46:32 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/08 02:48:40 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numlen(int n)
{
	unsigned int	newnum;
	int				cont;

	if (n < 0)
	{
		newnum = n * -1;
	}
	else
	{
		newnum = n;
	}
	cont = 1;
	while ((newnum / 10) > 0)
	{
		newnum /= 10;
		cont++;
	}
	return (cont);
}

char	*assignmalloc(int n, int bytes)
{
	char	*str;

	if (n < 0)
	{
		str = (char *)malloc(bytes * sizeof(char) + 2);
	}
	else
	{
		str = (char *)malloc(bytes * sizeof(char) + 1);
	}
	if (!str)
	{
		return (0);
	}
	return (str);
}

char	*nbrtostr(char *str, int n, int nlen)
{
	unsigned int	newnum;

	if (n < 0)
	{
		newnum = n * -1;
	}
	else
	{
		newnum = n;
	}
	*(str + nlen) = '\0';
	while (nlen--)
	{
		*(str + nlen) = (newnum % 10) + '0';
		newnum /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*newstr;
	int		nlen;

	nlen = numlen(n);
	newstr = assignmalloc(n, nlen);
	if (!newstr)
	{
		return (0);
	}
	if (n < 0)
	{
		*newstr = '-';
		nbrtostr(newstr + 1, n, nlen);
	}
	else
	{
		nbrtostr(newstr, n, nlen);
	}
	return (newstr);
}

/* //This is for testing
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
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