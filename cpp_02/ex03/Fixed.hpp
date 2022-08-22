/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 02:49:10 by hyap              #+#    #+#             */
/*   Updated: 2022/08/20 02:28:44 by hyap             ###   ########.fr       */
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

		Fixed& operator=(const Fixed &rhs);

		bool	operator>(const Fixed &rhs) const;
		bool	operator<(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs) const;
		bool	operator<=(const Fixed &rhs) const;
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs) const;

		Fixed	operator+(const Fixed &rhs) const;
		Fixed	operator-(const Fixed &rhs) const;
		Fixed	operator*(const Fixed &rhs) const;
		Fixed	operator/(const Fixed &rhs) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed&	min(Fixed &one, Fixed &two);
		static const Fixed&	min(const Fixed &one, const Fixed &two);
		static Fixed&	max(Fixed &one, Fixed &two);
		static const Fixed&	max(const Fixed &one, const Fixed &two);

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
