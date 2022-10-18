/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:00:29 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 16:38:59 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
# include <iostream>
# include <algorithm>
# include <vector>
# include <cmath>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"

class Span {
	public:
		Span(void);
		~Span(void);
		Span(const Span &src);
		Span	&operator=(const Span &rhs);
		Span(unsigned int N);

		void			addNumber(int N);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		void			fillSpan(void);

		class InvalidSpan : public std::exception {
			public:
				virtual const char	*what(void) const throw();
		};

		class FullSpan : public std::exception {
			public:
				virtual const char	*what(void) const throw();
		};

		std::vector<int>	_span;

	private:
		unsigned int	_size;
		unsigned int	_num_added;
};

int	randomNumber(void);
bool	sortCompare(int a, int b);
std::ostream	&operator<<(std::ostream &o, Span &rhs);


#endif
