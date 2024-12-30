/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:58:48 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:08:21 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **a, t_moves **moves)
{
	t_list	*tmp;

	if (!(*a))
		return ;
	append_move(0, moves);
	tmp = (*a);
	(*a) = (*a)->next;
	(*a)->prev = NULL;
	tmp->next = (*a)->next;
	if ((*a)->next)
		((*a)->next)->prev = tmp;
	(*a)->next = tmp;
	tmp->prev = (*a);
}
