/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:21:46 by hyap              #+#    #+#             */
/*   Updated: 2022/10/08 14:32:24 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include <iostream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm{
	public:
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);
		PresidentialPardonForm(const std::string target);

		void	execute(const Bureaucrat &bur) const;
	private:
		
};

#endif
