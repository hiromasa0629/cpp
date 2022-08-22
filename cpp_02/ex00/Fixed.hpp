/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 02:49:10 by hyap              #+#    #+#             */
/*   Updated: 2022/08/19 22:45:11 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(const Fixed &a);
		~Fixed(void);
		Fixed& operator=(const Fixed &a);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);

	private:
		static const int	_frac_bits = 8;
		int					_fp;
};

#endif
