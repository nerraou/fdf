/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:43:33 by nerraou           #+#    #+#             */
/*   Updated: 2022/01/21 14:42:10 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FDF_H
#define FDF_H

#include <math.h>
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int 	line_length;
	int		endian;
	int		width;
	int		height;
}					t_data;

typedef struct s_point
{
	int	x;
	int	y;
	int z;
	int color;
}				t_point;

typedef struct s_mlx
{
	void	*mlx;
	void	*mlx_win;
}				t_mlx;

char	**ft_split(char const *s, char c);

void	ft_mlx_pixel_put(t_data *data, int x, int y, int color);
void 	ft_init(t_data *data, t_mlx *mlx);
int		create_trgb(int t, int r, int g, int b);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strncpy(char *dest, const char *src, size_t n);
#endif
