/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kohtakochi <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 21:53:24 by kohtakochi        #+#    #+#             */
/*   Updated: 2022/12/01 21:55:17 by kohtakochi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int suuti;
	scanf("%d", &suuti);
	if (suuti == 10)
		printf("入力値は10です。\n");
	if (suuti != 10)
		printf("入力値は10ではありません。\n");
	return (0);
}