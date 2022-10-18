/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:33:24 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 20:11:04 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "./Contact.hpp"
# include <fstream>

class PhoneBook {
	private:
		Contact 			contacts[8];
		static int			count;

	public:
		PhoneBook(void);
		virtual	~PhoneBook(void);

		bool	add_contact(int index, std::fstream &fs);
		void	search_contact(int index) const;
		void	show_all_contacts(void) const;
};

#endif
