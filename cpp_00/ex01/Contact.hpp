/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:50:19 by hyap              #+#    #+#             */
/*   Updated: 2022/08/17 00:32:16 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact {
	private:
		int					_index;
		std::string			_first_name;
		std::string			_last_name;
		std::string			_nickname;
		std::string			_phone_number;
		std::string			_secret;
	
	public:
		Contact(void);
		virtual ~Contact(void);

		std::string	get_first_name(void) const;
		std::string get_last_name(void) const;
		std::string get_nickname(void) const;
		std::string get_phone_number(void) const;
		std::string get_secret(void) const;
		int			get_index(void) const;

		void	set_first_name(std::string s);
		void	set_last_name(std::string s);
		void	set_nickname(std::string s);
		void	set_phone_number(std::string s);
		void	set_secret(std::string s);
		void	set_index(int i);

		bool	set_contact(int index);
		void	show_contact(void) const;
};

#endif
