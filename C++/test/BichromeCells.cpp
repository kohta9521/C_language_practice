/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BichromeCells.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:06:28 by kkohta            #+#    #+#             */
/*   Updated: 2023/01/18 09:09:59 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int	main() {
	int N, A;
	cin >> N >> A;
	cout << (N * N) - A;
}