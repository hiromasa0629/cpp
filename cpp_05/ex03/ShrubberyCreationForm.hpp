/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:20:18 by hyap              #+#    #+#             */
/*   Updated: 2022/10/08 20:12:44 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm(const std::string target);

		virtual void	execute(const Bureaucrat &bur) const;
	private:
		ShrubberyCreationForm	*clone(void) const;
};

#endif
