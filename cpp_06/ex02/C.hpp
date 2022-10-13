/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:46:40 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 21:55:05 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_H
# define C_H
# include <iostream>
# include "Base.hpp"

class C : public Base {
	public:
		C(void);
		~C(void);
		C(const C &src);
		C	&operator=(const C &rhs);

	private:
		
};

#endif
