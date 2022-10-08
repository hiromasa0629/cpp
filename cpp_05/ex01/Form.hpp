/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:30:30 by hyap              #+#    #+#             */
/*   Updated: 2022/09/24 20:59:48 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(void);
		~Form(void);
		Form(const Form &src);
		Form	&operator=(const Form &rhs);
		Form(const std::string name, const int minGradeToSign, const int minGradeToExecute);
		
		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getMinGradeToSign(void) const;
		int					getMinGradeToExecute(void) const;
		
		void				beSigned(const Bureaucrat &bur);
		
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException(void);
				virtual ~GradeTooHighException(void) throw();
				virtual const char* what(void) const throw();
			private:
				std::string	_msg;
			
		};
		
		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException(void);
				GradeTooLowException(const Bureaucrat &bur);
				virtual ~GradeTooLowException(void) throw();
				virtual const char* what(void) const throw();
			protected:
				std::string	_msg;
		};
		
	private:
		const std::string	_name;
		bool				_signed;
		const int			_minGradeToSign;
		const int			_minGradeToExecute;
};

std::ostream	&operator<<(std::ostream &o, const Form &rhs);

#endif
