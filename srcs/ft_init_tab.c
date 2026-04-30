/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 00:41:14 by marvin            #+#    #+#             */
/*   Updated: 2026/04/30 00:41:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utiles.h"

void	ft_init_tab(int grid[4][4])
{
	int	count_1;
	int	count_2;

	count_1 = 0;
	count_2 = 0;
	while (count_1 < 4)
	{
		while (count_2 < 4)
		{
			grid[count_1][count_2] = 0;
			count_2++;
		}
		count_2 = 0;
		count_1++;
	}
}
