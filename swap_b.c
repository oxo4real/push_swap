/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:58:48 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:08:24 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list **b, t_moves **moves)
{
	t_list	*tmp;

	if (!(*b))
		return ;
	append_move(1, moves);
	tmp = (*b);
	(*b) = (*b)->next;
	(*b)->prev = NULL;
	tmp->next = (*b)->next;
	if ((*b)->next)
		((*b)->next)->prev = tmp;
	(*b)->next = tmp;
	tmp->prev = (*b);
}
