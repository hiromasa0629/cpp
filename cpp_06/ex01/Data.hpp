/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:19:05 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 21:38:03 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H
# include <iostream>

class Data {
	public:
		Data(void);
		~Data(void);
		Data(const Data &src);
		Data	&operator=(const Data &rhs);
		
		std::string	getStr(void) const;

	private:
		std::string	_str;
};

std::ostream	&operator<<(std::ostream &o, const Data &data);

#endif
