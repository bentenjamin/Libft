/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rndwncbrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwebb <bwebb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 11:57:01 by bwebb             #+#    #+#             */
/*   Updated: 2019/09/03 12:24:33 by bwebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_rndwncbrt(int num)
{
    int icount;

    if (num < 1)
        return (0);
    icount = 1;
    while (icount * icount * icount < num)
        icount++;
    return (icount - 1);
}