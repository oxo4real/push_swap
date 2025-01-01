/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:58:48 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 17:53:24 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list **b, int print)
{
	t_list	*tmp;

	if (!(*b))
		return ;
	if (print)
		ft_putstr_fd("sb\n", 1);
	tmp = (*b);
	(*b) = (*b)->next;
	(*b)->prev = NULL;
	tmp->next = (*b)->next;
	if ((*b)->next)
		((*b)->next)->prev = tmp;
	(*b)->next = tmp;
	tmp->prev = (*b);
}
