/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:44:33 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:09:13 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_b(t_list **b, t_moves **moves)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*b))
		return ;
	append_move(7, moves);
	last = ft_lstlast((*b));
	tmp = (*b);
	(*b) = last;
	if ((*b)->prev)
		((*b)->prev)->next = NULL;
	(*b)->prev = NULL;
	(*b)->next = tmp;
	tmp->prev = (*b);
}
