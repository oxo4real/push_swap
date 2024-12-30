/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 19:55:02 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/29 19:56:57 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_moves(t_moves **moves)
{
	t_moves	*next;

	if (moves)
	{
		while (*moves)
		{
			next = (*moves)->next;
			free(*moves);
			(*moves) = next;
		}
		(*moves) = NULL;
	}
}
