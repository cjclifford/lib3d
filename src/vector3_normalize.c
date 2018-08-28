/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3_normalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccliffor <ccliffor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 11:53:45 by ccliffor          #+#    #+#             */
/*   Updated: 2018/08/28 15:17:48 by ccliffor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

void	vec3_normalize(t_vec3 *v)
{
	double	inv_len;

	inv_len = 1 / vec3_length(*v);
	v->x *= inv_len;
	v->y *= inv_len;
	v->z *= inv_len;
}