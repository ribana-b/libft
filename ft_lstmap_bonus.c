/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@42student.malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 02:20:55 by ribana-b          #+#    #+#             */
/*   Updated: 2023/05/08 02:49:07 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*flist(t_list *l1, t_list *l2, void *(*f)(void *), void (*del)(void *))
{
	t_list	*templist;

	templist = l2;
	(*templist).content = f((*l1).content);
	while ((*l1).next)
	{
		l1 = (*l1).next;
		(*templist).next = (t_list *)malloc(sizeof(t_list));
		if (!(*templist).next)
		{
			ft_lstclear(&l2, del);
			return (0);
		}
		(*(*templist).next).content = f((*l1).content);
		templist = (*templist).next;
	}
	(*templist).next = 0;
	return (l2);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	if (!lst || !f ||!del)
	{
		return (0);
	}
	newlist = (t_list *)malloc(sizeof(t_list));
	if (!newlist)
	{
		return (0);
	}
	return (flist(lst, newlist, f, del));
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