/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:44:33 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 17:52:54 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_b(t_list **b, int print)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*b))
		return ;
	if (print)
		ft_putstr_fd("rrb\n", 1);
	last = ft_lstlast((*b));
	tmp = (*b);
	(*b) = last;
	if ((*b)->prev)
		((*b)->prev)->next = NULL;
	(*b)->prev = NULL;
	(*b)->next = tmp;
	tmp->prev = (*b);
}
