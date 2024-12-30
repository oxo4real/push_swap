/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:44:33 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:09:03 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_a(t_list **a, t_moves **moves)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*a))
		return ;
	append_move(6, moves);
	last = ft_lstlast((*a));
	tmp = (*a);
	(*a) = last;
	if ((*a)->prev)
		((*a)->prev)->next = NULL;
	(*a)->prev = NULL;
	(*a)->next = tmp;
	tmp->prev = (*a);
}
