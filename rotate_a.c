/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:21:07 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:08:53 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **a, t_moves **moves)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*a))
		return ;
	append_move(4, moves);
	last = ft_lstlast((*a));
	tmp = (*a);
	last->next = (*a);
	(*a) = (*a)->next;
	tmp->prev = last;
	(*a)->prev = NULL;
	tmp->next = NULL;
}
