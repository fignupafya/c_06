/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:55:20 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/13 09:56:46 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putch(char c)
{
	write(1, &c, 1);
}

void	prntstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		putch(str[i]);
		i++;
	}
}

int	main(int ln, char **str)
{
	int	a;

	a = ln - 1;
	while (a > 0)
	{
		prntstr(str[a]);
		putch('\n');
		a--;
	}
	return (0);
}
