/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3_mutliply.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccliffor <ccliffor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 11:28:12 by ccliffor          #+#    #+#             */
/*   Updated: 2018/08/28 11:37:48 by ccliffor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

t_vec3	vec3_multiply(const t_vec3 v1, const double m)
{
	t_vec3 new;

	new.x = v1.x * m;
	new.y = v1.y * m;
	new.z = v1.z * m;
	return (new);
}
