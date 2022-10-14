/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:48:14 by hyap              #+#    #+#             */
/*   Updated: 2022/10/14 15:18:47 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H
# include <iostream>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"

template <typename T>
void	iter(T *arr, int len, void func(T &))
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

class HelloWorld {
	public:
		HelloWorld(int i) : _i(i) {};
		
		int	getI(void) const 
		{
			return (this->_i);
		}
		
	private:
		int	_i;
};

std::ostream	&operator<<(std::ostream &o, const HelloWorld &rhs)
{
	o << "Hello World " << rhs.getI();
	return (o);
}

template <typename T>
void	print(const T a)
{
	std::cout << a << std::endl;
}

#endif
