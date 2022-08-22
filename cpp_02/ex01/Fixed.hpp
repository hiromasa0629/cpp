/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 02:49:10 by hyap              #+#    #+#             */
/*   Updated: 2022/08/20 00:16:25 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float fnum);
		Fixed(const Fixed &a);
		~Fixed(void);

		Fixed& operator=(const Fixed &a);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		static const int	_frac_bits;
		int					_fp;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
