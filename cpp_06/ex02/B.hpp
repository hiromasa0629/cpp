/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:46:31 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 21:54:55 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
# define B_H
# include <iostream>
# include "Base.hpp"

class B : public Base {
	public:
		B(void);
		~B(void);
		B(const B &src);
		B	&operator=(const B &rhs);

	private:
		
};

#endif
