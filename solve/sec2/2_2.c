/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 15:16:44 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/11 15:25:16 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int n;

	printf("nの値を入力せよ : ");
	scanf("%d", &n);

	printf("n / 5は%dです。\n", n / 5);
	printf("n %% 5は%dです。\n", n % 5);

	return (0);
}