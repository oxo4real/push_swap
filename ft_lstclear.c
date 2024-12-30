/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:16:14 by marvin            #+#    #+#             */
/*   Updated: 2024/08/11 10:16:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*next;

	if (lst)
	{
		while (*lst)
		{
			next = (*lst)->next;
			free(*lst);
			(*lst) = next;
		}
		(*lst) = NULL;
	}
}
