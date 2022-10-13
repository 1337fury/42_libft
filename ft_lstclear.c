/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:00:37 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/10/12 16:11:37 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*suivant;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		suivant = *lst;
		del((*lst)->content);
		free(suivant);
		*lst = (*lst)->next;
	}
	*lst = NULL;
}
