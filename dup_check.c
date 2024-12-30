/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:13:46 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/26 15:17:54 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dup_check(t_list *a)
{
	t_list	*head;

	while (a->next)
	{
		head = a->next;
		while (head)
		{
			if (head->content == a->content)
				return (0);
			head = head->next;
		}
		a = a->next;
	}
	return (1);
}
