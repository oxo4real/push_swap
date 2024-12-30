/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issorted.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:02:55 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/27 11:32:23 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	issorted(t_list *list)
{
	int		prev;

	if (!list)
		return (1);
	prev = list->content;
	list = list->next;
	while (list)
	{
		if (prev > list->content)
			return (0);
		prev = list->content;
		list = list->next;
	}
	return (1);
}
