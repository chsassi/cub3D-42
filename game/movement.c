/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brulutaj <brulutaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 23:20:33 by chsassi           #+#    #+#             */
/*   Updated: 2024/11/13 09:48:18 by brulutaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	rotate_player(t_all *cubed, int i)
{
	if (i == 0)
	{
		cubed->player.angle -= ROTATION_SPEED;
		if (cubed->player.angle < 0)
			cubed->player.angle += 2 * PI;
	}
	else
	{
		cubed->player.angle += ROTATION_SPEED;
		if (cubed->player.angle > 2 * PI)
			cubed->player.angle -= 2 * PI;
	}
	return (0);
}

