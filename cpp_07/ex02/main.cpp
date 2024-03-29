/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:24:04 by hyap              #+#    #+#             */
/*   Updated: 2023/02/23 15:25:48 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"

#define MAX_VAL 750

int	main(void)
{
	std::cout << RED << "====== Empty Array ======" << WHITE << std::endl;
	Array<int>	arr;
	std::cout << "Size: " << arr.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << RED << "====== Copy ======" << WHITE << std::endl;
	Array<std::string> str_arr(2);
	std::cout << "str_arr size: " << str_arr.size() << std::endl;
	str_arr[0] = "Hello";
	str_arr[1] = "World";
	std::cout << "str_arr: " << str_arr[0] << " " << str_arr[1] << std::endl;
	Array<std::string> cp_str_arr(str_arr);
	std::cout << "cp_str_arr size: " << cp_str_arr.size() << std::endl;
	std::cout << "cp_str_arr: " << cp_str_arr[0] << " " << cp_str_arr[1] << std::endl;
	Array<std::string> cpa_str_arr = str_arr;
	std::cout << "cpa_str_arr size: " << cpa_str_arr.size() << std::endl;
	std::cout << "cpa_str_arr: " << cpa_str_arr[0] << " " << cpa_str_arr[1] << std::endl;
	cpa_str_arr[1] = "Heya";
	std::cout << "str_arr: " << str_arr[0] << " " << str_arr[1] << std::endl;
	std::cout << "cp_str_arr: " << cp_str_arr[0] << " " << cp_str_arr[1] << std::endl;
	std::cout << "cpa_str_arr: " << cpa_str_arr[0] << " " << cpa_str_arr[1] << std::endl;
	std::cout << std::endl;
	
	std::cout << RED << "====== Exception ======" << WHITE << std::endl;
	try
	{
		Array<std::string> ex_str(2);
		ex_str[0] = "Yo";
		ex_str[1] = "Sup";
		ex_str[2] = "Error";
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "=============Subject Test==============" << std::endl;
	
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
	
}
