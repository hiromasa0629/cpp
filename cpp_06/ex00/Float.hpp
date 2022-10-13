/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:07:01 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 17:08:50 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOAT_H
# define FLOAT_H
# include <iostream>
# include "Conversion.hpp"
# include "AScalar.hpp"

class Conversion;

class Float : public AScalar {
	public:
		Float(void);
		~Float(void);
		Float(const Float &src);
		Float	&operator=(const Float &rhs);
		Float(const Conversion &converted);

	private:
		
};

#endif
