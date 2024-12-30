/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:58:22 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/30 12:33:37 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_cheapest(t_list *lst)
{
	t_list	*cheapest;

	cheapest = lst;
	lst = lst->next;
	while (lst)
	{
		if (cheapest->cost > lst->cost)
			cheapest = lst;
		lst = lst->next;
	}
	return (cheapest);
}
