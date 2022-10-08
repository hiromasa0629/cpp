/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:21:16 by hyap              #+#    #+#             */
/*   Updated: 2022/10/08 14:32:03 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
		RobotomyRequestForm(const std::string target);

		void	execute(const Bureaucrat &bur) const;
	private:
		
};

#endif
