/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:40:29 by hyap              #+#    #+#             */
/*   Updated: 2022/10/10 17:49:12 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H
# define CHAR_H
# include <iostream>
# include "AScalar.hpp"

class Char : public AScalar {
	public:
		Char(void);
		~Char(void);
		Char(const Char &src);
		Char	&operator=(const Char &rhs);
	
		void	fit(char *arg);
	private:
		bool	isPrintable(long num) const;
};

#endif
