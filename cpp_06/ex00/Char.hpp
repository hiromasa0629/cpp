/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:40:29 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 13:41:14 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H
# define CHAR_H
# include <iostream>
# include "AScalar.hpp"
# include "Conversion.hpp"

class Conversion;
class Char : public AScalar {
	public:
		Char(void);
		~Char(void);
		Char(const Char &src);
		Char	&operator=(const Char &rhs);
		Char(const Conversion &converted);
	
	private:
};

#endif
