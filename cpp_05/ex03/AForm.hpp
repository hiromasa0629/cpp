/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:30:30 by hyap              #+#    #+#             */
/*   Updated: 2022/09/24 20:59:48 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H
# include <iostream>
# include "Bureaucrat.hpp"

# define M_SIGN 1
# define M_EXECUTE 2

class Bureaucrat;

class AForm {
	public:
		AForm(void);
		virtual ~AForm(void);
		AForm(const AForm &src);
		AForm	&operator=(const AForm &rhs);
		AForm(const std::string name, const int minGradeToSign, const int minGradeToExecute);
		
		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getMinGradeToSign(void) const;
		int					getMinGradeToExecute(void) const;
		
		void				beSigned(const Bureaucrat &bur);
		virtual void		execute(const Bureaucrat &bur) const = 0;
		virtual std::string	getTarget(void) const;
		virtual AForm		*clone(void) const = 0;
		
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
				GradeTooLowException(const Bureaucrat &bur, const int method);
				virtual ~GradeTooLowException(void) throw();
				virtual const char* what(void) const throw();
				
			private:
				std::string	_msg;
		};
		
		class FormNotSigned : public std::exception {
			public:
				FormNotSigned(const AForm &form);
				virtual ~FormNotSigned(void) throw();
				virtual const char* what(void) const throw();
			
			private:
				std::string _msg;
		};
		
	private:
		const std::string	_name;
	
	protected:
		bool				_signed;
		std::string			_target;
		const int			_minGradeToSign;
		const int			_minGradeToExecute;
};

std::ostream	&operator<<(std::ostream &o, const AForm &rhs);

#endif
