/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curr_ind.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:31:41 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/28 17:45:54 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_min(t_list **min, t_list *lst);
static void	set_max(t_list **max, t_list *lst);

void	curr_ind(t_list	*lst)
{
	int		median;
	int		ind;
	t_list	*min;
	t_list	*max;

	ind = 0;
	median = ft_lstsize(lst) / 2;
	max = lst;
	max->ismax = 1;
	min = lst;
	min->ismin = 1;
	while (lst)
	{
		lst->index = ind;
		if (lst->content > max->content)
			set_max(&max, lst);
		else if (lst->content < min->content)
			set_min(&min, lst);
		if (ind < median)
			lst->abov_median = 1;
		else
			lst->abov_median = 0;
		lst = lst->next;
		ind++;
	}
}

static void	set_min(t_list **min, t_list *lst)
{
	(*min)->ismin = 0;
	(*min) = lst;
	(*min)->ismin = 1;
}

static void	set_max(t_list **max, t_list *lst)
{
	(*max)->ismax = 0;
	(*max) = lst;
	(*max)->ismax = 1;
}
