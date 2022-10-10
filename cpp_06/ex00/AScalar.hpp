/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AScalar.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:13:13 by hyap              #+#    #+#             */
/*   Updated: 2022/10/10 18:07:58 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASCALAR_H
# define ASCALAR_H
# include <iostream>
# include <sstream>

class AScalar {
	public:
		AScalar(void);
		virtual ~AScalar(void);
		AScalar(const AScalar &src);
		AScalar	&operator=(const AScalar &rhs);
		
		std::string	getMsg(void) const;
		void		setMsg(const std::string msg);
		
		void	print(void) const;
		
	protected:
		virtual	void	fit(char *arg) = 0;
		bool			isFloatOrDoubleOrInt(char *end) const;
		bool			isNanOrNull(char *arg) const;
		bool			isDigit(char c) const;

	private:
		std::string	_msg;
};

#endif
