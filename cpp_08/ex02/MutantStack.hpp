/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:45:16 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 18:42:41 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
# include <iostream>
# include <stack>
# include <algorithm>
# include <list>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"

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
		iterator_type	begin(void);
		iterator_type 	end(void);

	private:

};

#endif

