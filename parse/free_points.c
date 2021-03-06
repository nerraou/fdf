/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_points.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:28:45 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/14 11:38:06 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h" 

void	free_points(t_point ***tab, int h)
{
	int	i;

	i = 0;
	while (i < h)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
