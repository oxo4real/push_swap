/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:44:33 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/07 16:46:47 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate_a(t_list **a, int print)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*a))
		return ;
	if (print)
		ft_putstr_fd("rra\n", 1);
	last = ft_lstlast((*a));
	tmp = (*a);
	(*a) = last;
	if ((*a)->prev)
		((*a)->prev)->next = NULL;
	(*a)->prev = NULL;
	if (tmp != (*a))
		(*a)->next = tmp;
	tmp->prev = (*a);
}
