/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:57:57 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/13 17:01:02 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *ptr)
{
	free(ptr);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

#include <stdio.h>
int main ()
{
	t_list *s1 = malloc(sizeof(t_list));
	t_list *s2 = malloc(sizeof(t_list));
	t_list *s3 = malloc(sizeof(t_list));

	s1->content = "hello";	
	s1->next = s2;	
	
	s2->content = "world";	
	s2->next = s3;
	
	s3->content = "i am the last node";
	s3->next = NULL;


	t_list *new = malloc(sizeof(t_list));
	new->content = "i am the new node";

	ft_lstdelone(s2, del);
	
	printf("%s", s3->content);	
}