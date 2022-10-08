/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:26:11 by hyap              #+#    #+#             */
/*   Updated: 2022/10/08 20:26:34 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
# include <iostream>
# include "AForm.hpp"

class Intern {
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern &src);
		Intern	&operator=(const Intern &rhs);

		AForm	*makeForm(const std::string name, const std::string target);
		
		class InvalidFormName : public std::exception {
			public:
				virtual const char	*what() const throw();
		};

	private:
		static AForm	*makeShrubbery(const std::string target); 
		static AForm	*makeRobotomy(const std::string target);
		static AForm	*makePresidential(const std::string target);
		
};

#endif
