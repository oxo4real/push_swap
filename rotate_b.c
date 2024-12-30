/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:21:07 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:08:58 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list **b, t_moves **moves)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*b))
		return ;
	append_move(5, moves);
	last = ft_lstlast((*b));
	tmp = (*b);
	last->next = (*b);
	(*b) = (*b)->next;
	tmp->prev = last;
	(*b)->prev = NULL;
	tmp->next = NULL;
}
