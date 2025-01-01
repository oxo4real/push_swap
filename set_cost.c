/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_cost.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:13:50 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/30 15:47:49 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	push_cost(t_list *lst);

void	set_cost(t_list *lst)
{
	while (lst)
	{
		lst->cost = push_cost(lst) + push_cost(lst->target);
		lst = lst->next;
	}
}

static int	push_cost(t_list *lst)
{
	if (!lst)
		return (0);
	if (lst->abov_median)
		return (lst->index);
	else
		return (ft_lstsize(lst));
}
