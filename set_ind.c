/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_ind.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 13:50:40 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/30 14:29:41 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void set_ind(t_list *a)
{
	t_list			*head1;
	t_list			*head2;
	unsigned int	ind;

	head1 = a;
	while (head1)
	{
		ind = 0;
		head2 = a;
		while (head2)
		{
			if (head2->content < head1->content)
				ind ++;
			head2 = head2->next;
		}
		head1->index = ind;
		head1 = head1->next;
	}
}
