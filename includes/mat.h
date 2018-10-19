/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccliffor <ccliffor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 08:39:14 by ccliffor          #+#    #+#             */
/*   Updated: 2018/09/25 08:48:14 by ccliffor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT_H
# define MAT_H

#include "math.h"

typedef double	t_mat[4][4];

t_mat	*mat_multiply(t_mat mat1, t_mat mat2);
t_mat	*mat_add_pos(t_mat mat1, t_mat mat2);

#endif