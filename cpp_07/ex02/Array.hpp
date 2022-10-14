/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:24:05 by hyap              #+#    #+#             */
/*   Updated: 2022/10/14 17:48:02 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>

template <typename T>
class Array {
	public:
		Array(void);
		~Array(void);
		Array(const Array &src);
		Array	&operator=(const Array &rhs);
		Array(const unsigned int n);
		
		T	&operator[](unsigned int i) const;
		unsigned int	size(void) const;
		
		class OutOfBoundException : public std::exception {
			public:
				virtual const char	*what(void) const throw() {
					return ("Index out of bound !");
				}
		};

	private:
		T				*_array;
		unsigned int	_size;
};

#endif


