/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:34:59 by hyap              #+#    #+#             */
/*   Updated: 2023/01/16 19:42:05 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);

		const std::string	&getType() const;
		void				setType(std::string type);
	
	private:
		std::string	_type;
};

#endif
