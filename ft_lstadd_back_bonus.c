/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:28:20 by ribana-b          #+#    #+#             */
/*   Updated: 2023/06/18 15:58:55 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*newlist;

	if (!lst)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		newlist = ft_lstlast(*lst);
		(*newlist).next = new;
	}
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