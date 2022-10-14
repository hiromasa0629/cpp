/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:37:56 by hyap              #+#    #+#             */
/*   Updated: 2022/10/14 14:43:34 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H
# include <iostream>

template<class T>
void	swap(T &a, T &b)
{
	T	tmp = b;
	
	b = a;
	a = tmp;
}

template<class T>
T	min(T a, T b)
{
	if (a == b)
		return (b);
	return (a < b ? a : b);
}

template<class T>
T max(T a, T b)
{
	if (a == b)
		return (b);
	return (a > b ? a : b);
}

#endif
