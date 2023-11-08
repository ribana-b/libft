/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:59:12 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/08 02:49:37 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**fullfree(char **str, int cont)
{
	while (cont--)
	{
		free(str[cont]);
	}
	free(str);
	return (0);
}

int	contword(const char *s, char c)
{
	int	wcont;

	wcont = 0;
	while (*s)
	{
		if (*s != c)
		{
			wcont++;
			while (*s && *s != c)
			{
				s++;
			}
		}
		else
		{
			s++;
		}
	}
	return (wcont);
}

char	*word(const char *s, char c)
{
	char	*str;
	int		cont;

	cont = 0;
	while (*(s + cont) && *(s + cont) != c)
	{
		cont++;
	}
	str = malloc((cont + 1) * sizeof(char));
	if (!str)
	{
		return (0);
	}
	cont = 0;
	while (*(s + cont) && *(s + cont) != c)
	{
		*(str + cont) = *(s + cont);
		cont++;
	}
	*(str + cont) = '\0';
	return (str);
}

char	**strstore(char const *s, char c)
{
	char	**storage;
	int		cont;
	int		nword;

	nword = contword(s, c);
	storage = malloc((nword + 1) * sizeof(char *));
	if (!storage)
	{
		return (0);
	}
	cont = 0;
	while (*s && cont < nword)
	{
		while (*s && *s == c)
			s++;
		*(storage + cont) = word(s, c);
		if (!*(storage + cont))
			return (fullfree(storage, cont));
		cont++;
		while (*s && *s != c)
			s++;
	}
	*(storage + cont) = NULL;
	return (storage);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;

	if (!s)
	{
		return (0);
	}
	newstr = strstore(s, c);
	if (!newstr)
	{
		return (0);
	}
	return (newstr);
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