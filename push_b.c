/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:56:15 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:08:35 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **a, t_list **b, t_moves **moves)
{
	t_list	*tmp;

	if (!(*a))
		return ;
	append_move(3, moves);
	tmp = (*a);
	(*a) = (*a)->next;
	(*a)->prev = NULL;
	tmp->next = (*b);
	if (*b)
		(*b)->prev = tmp;
	(*b) = tmp;
}
