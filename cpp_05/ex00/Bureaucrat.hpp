/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:20:42 by hyap              #+#    #+#             */
/*   Updated: 2022/09/24 16:13:33 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		Bureaucrat(const std::string name, const int grade);
	
		const std::string	getName(void) const;
		int					getGrade(void) const;
		
		void				incrementGrade(void);
		void				decrementGrade(void);
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("GRADE TOO HIGH !");
				}
		};
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("GRADE TOO LOW !");
				}
		};
		
	private:
		const std::string	_name;
		int			_grade;

};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif
