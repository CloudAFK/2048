/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 00:42:11 by marvin            #+#    #+#             */
/*   Updated: 2026/04/30 00:42:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utiles.h"

int	ft_verif_nb(int nb)
{
	int	counter;

	counter = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		counter++;
	}
	return (counter);
}

void	ft_aff_case(char *line, int nb)
{
	int	count;
	int	result;

	count = 0;
	while (count < 4)
	{
		if (nb == 0)
		{
			write(1, "|       |", 10);
			write(1, "|       |", 10);
			write(1, "|       |", 10);
		}
		else if (nb > 0)
		{
			result = ft_verif_nb(nb);
		}
		write(1, line, 8);
		count++;
	}
	write(1, "\n", 1);
}

void	ft_verif_space(int result, int *left, int *right)
{
	*left = (7 - result) / 2;
	*right = (7 - result) - *left;
}

void	ft_call_case(void)
{
	char	*line_1;
	char	*line_2;
	int		count_1;
	int		nb;

	line_1 = " ------- ";
	line_2 = "|       |";
	count_1 = 0;
	while (count_1 < 4)
	{
		ft_aff_case(line_1, nb);
		ft_aff_case(line_2, nb);
		ft_aff_case(line_2, nb);
		ft_aff_case(line_2, nb);
		ft_aff_case(line_1, nb);
		count_1++;
	}
}
