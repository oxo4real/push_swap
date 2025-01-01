/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:21:07 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 17:52:14 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list **b, int print)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*b))
		return ;
	if (print)
		ft_putstr_fd("rb\n", 1);
	last = ft_lstlast((*b));
	tmp = (*b);
	last->next = (*b);
	(*b) = (*b)->next;
	tmp->prev = last;
	(*b)->prev = NULL;
	tmp->next = NULL;
}
