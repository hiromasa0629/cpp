/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:21:15 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 14:57:43 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H
# include <iostream>
# define T_CHAR 1
# define T_INT 2
# define T_FLOAT 3
# define T_DOUBLE 4
# define T_NAN 5
# define T_IMPOSSIBLE 0
# define S_POS 1
# define S_NEG 2

class Conversion {
	public:
		Conversion(void);
		~Conversion(void);
		Conversion(const Conversion &src);
		Conversion	&operator=(const Conversion &rhs);
		Conversion(std::string arg);
		
		int			getType(void) const;
		void		setType(const int type);
		std::string	getArg(void) const;
		void		setArg(std::string arg);
		int			getSign(void) const;
		void		setSign(const int sign);
		
		bool	isDigit(char c) const;
		bool	isInt(const std::string arg) const;
		bool	isFloat(const std::string arg) const;
		bool	isDouble(const std::string arg) const;
		
	private:
		int			_type;
		int			_sign;
		std::string	_arg;
		
		
};

#endif
