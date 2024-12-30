/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:53:50 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 18:31:39 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	append_move(int move, t_moves **moves)
{
	t_moves	*new;
	t_moves	*last;

	if (!moves)
		return (0);
	new = (t_moves *)malloc(sizeof(t_moves));
	if (!new)
		return (0);
	new->move = move;
	new->next = NULL;
	if (*moves)
	{
		last = (*moves);
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		(*moves) = new;
	return (1);
}
