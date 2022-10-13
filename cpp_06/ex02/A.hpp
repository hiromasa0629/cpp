/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:42:22 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 21:45:09 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
# define A_H
# include <iostream>
# include "Base.hpp"

class A : public Base {
	public:
		A(void);
		~A(void);
		A(const A &src);
		A	&operator=(const A &rhs);

	private:
		
};

#endif
