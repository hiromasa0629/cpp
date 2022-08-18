/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:34:59 by hyap              #+#    #+#             */
/*   Updated: 2022/08/18 23:16:30 by hyap             ###   ########.fr       */
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
