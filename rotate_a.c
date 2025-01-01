/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:21:07 by aaghzal           #+#    #+#             */
/*   Updated: 2025/01/01 17:52:03 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **a, int print)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*a))
		return ;
	if (print)
		ft_putstr_fd("ra\n", 1);
	last = ft_lstlast((*a));
	tmp = (*a);
	last->next = (*a);
	(*a) = (*a)->next;
	tmp->prev = last;
	(*a)->prev = NULL;
	tmp->next = NULL;
}
