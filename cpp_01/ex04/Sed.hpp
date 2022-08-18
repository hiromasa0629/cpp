/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:12:20 by hyap              #+#    #+#             */
/*   Updated: 2022/08/19 01:25:40 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H
# include <iostream>
# include <fstream>
# include <sstream>

class Sed {
	public:
		Sed(void);
		~Sed(void);

		bool	setFilein(std::string path);
		bool	setFileout(std::string path);

		void	replaceString(char *s1, char *s2);

	private:
		std::ofstream _fileout;
		std::ifstream _filein;
};

#endif
