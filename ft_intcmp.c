/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 16:33:52 by aaghzal           #+#    #+#             */
/*   Updated: 2024/12/25 16:34:20 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intcmp(char *w1, char *w2)
{
	int		i;
	int		j;

	if ((w1[0] == '-' || w2[0] == '-') && w1[0] != w2[0])
		return (w1[0] - w2[0]);
	i = 0;
	j = 0;
	if (w1[0] == '-')
		i++;
	if (w2[0] == '-')
		j++;
	while (w1[i] == '0')
		i++;
	while (w2[j] == '0')
		j++;
	while ((w1[i] != '\0' && w1[i] != ' ')
		|| (w2[j] != '\0' && w2[j] != ' '))
	{
		if (w1[i] != w2[j])
			return (w1[i] - w2[j]);
		i++;
		j++;
	}
	return (0);
}
