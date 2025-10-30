/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdombale <kdombale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:35:09 by kdombale          #+#    #+#             */
/*   Updated: 2025/10/22 10:53:30 by kdombale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (!lst || !new)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		curr = *lst;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new;
	}
}
