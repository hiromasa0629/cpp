/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:45:16 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 17:19:34 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <iostream>
# include <stack>
# include <algorithm>

template <typename T>
class MutantStack :  public std::stack<T> {
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack(const MutantStack &src);
		MutantStack	&operator=(const MutantStack &rhs);

		typedef	T value_type;
		typedef typename std::stack<value_type>::container_type	container_type;
		typedef typename container_type::iterator	iterator_type;
		iterator_type	begin(void) const;
		iterator_type 	end(void) const;

	private:

};

#endif

