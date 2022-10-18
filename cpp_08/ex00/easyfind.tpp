/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:29:10 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 11:59:26 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void	easyfind(T container, int i)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw ValueNotFound();
	std::cout << i << " Found" << std::endl;
}
