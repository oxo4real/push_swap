/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:35:49 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:08:30 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **a, t_list **b, t_moves **moves)
{
	t_list	*tmp;

	if (!(*b))
		return ;
	append_move(2, moves);
	tmp = (*b);
	(*b) = (*b)->next;
	if (*b)
		(*b)->prev = NULL;
	tmp->next = (*a);
	if (*a)
		(*a)->prev = tmp;
	(*a) = tmp;
}
