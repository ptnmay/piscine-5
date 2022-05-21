/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmikada <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:00:54 by pmikada           #+#    #+#             */
/*   Updated: 2022/05/14 17:44:30 by pmikada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	temp;

	if (nb == 2)
		return (1);
	else if (nb < 0 || nb == 0 || nb == 1 || nb % 2 == 0)
		return (0);
	temp = nb;
	while (nb > 3)
	{
		if (temp % (nb - 2) == 0)
			return (0);
		nb -= 2;
	}
	return (1);
}