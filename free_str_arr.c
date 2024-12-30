/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free2darr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:49:22 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/24 16:35:12 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_str_arr(char **str_arr)
{
	int		i;

	i = 0;
	while (str_arr[i])
	{
		free(str_arr[i]);
		str_arr[i] = NULL;
		i++;
	}
	free(str_arr);
	str_arr = NULL;
}
