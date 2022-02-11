/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:59:53 by nerraou           #+#    #+#             */
/*   Updated: 2022/02/11 17:53:39 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
#define PARSE_H

#include "fdf.h"



void del_point(void *point);
char	**ft_free(char **str, int size);
t_point ***list_to_array(t_list *list, int h, int w);
int  parse_line(char *line, t_list *list, int y);
t_list *parse_lines(char *file, int *w, int *h);
int  to_decimal(char *str);
void free_points(t_point ***tab, int h);
int	ft_atoi(const char *str);
#endif