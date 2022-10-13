/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:54:48 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 13:44:21 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_H
# define INT_H
# include <iostream>
# include "AScalar.hpp"
# include "Conversion.hpp"

class Conversion;

class Int : public AScalar {
	public:
		Int(void);
		~Int(void);
		Int(const Int &src);
		Int	&operator=(const Int &rhs);
		Int(const Conversion &converted);

	private:
};

#endif
