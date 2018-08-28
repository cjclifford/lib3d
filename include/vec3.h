/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccliffor <ccliffor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 15:50:16 by ccliffor          #+#    #+#             */
/*   Updated: 2018/08/28 15:16:06 by ccliffor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_H
# define VEC3_H

# include <math.h>
# include <stdio.h>

typedef struct	s_vec3
{
	double	x;
	double	y;
	double	z;
}				t_vec3;

t_vec3			vec3_create(double x, double y, double z);
double			vec3_length(const t_vec3 v);
t_vec3			vec3_add(const t_vec3 v1, const t_vec3 v2);
t_vec3			vec3_subtract(const t_vec3 v1, const t_vec3 v2);
t_vec3			vec3_multiply(const t_vec3 v1, const double m);
double			vec3_dot(const t_vec3 v1, const t_vec3 v2);
t_vec3			vec3_cross(const t_vec3 v1, const t_vec3 v2);
void			vec3_normalize(t_vec3 *v);

#endif