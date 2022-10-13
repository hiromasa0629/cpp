/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:06:26 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 18:09:46 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLE_H
# define DOUBLE_H
# include <iostream>
# include "Conversion.hpp"
# include "AScalar.hpp"

class Conversion;

class Double : public AScalar{
	public:
		Double(void);
		~Double(void);
		Double(const Double &src);
		Double	&operator=(const Double &rhs);
		Double(const Conversion &converted);

	private:
};

#endif
