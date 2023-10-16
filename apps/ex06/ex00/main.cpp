/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:58:38 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/16 10:37:35 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Color.hpp"



// int	main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 		ScalarConverter::convert(argv[1]);
// 	else
// 		std::cout << "./ex06 <input for conversion>" << std::endl;

// 	return (0);
// }



/* for all the test cases*/
int	main()
{
		std::string  test =  "-inf";
	std::cout << "\n"<< COLOR_MAGENTA << "testing: " << test << COLOR_RESET << std::endl;
		ScalarConverter::convert(test);
		
		test =  "+inf";
	std::cout << "\n"<< COLOR_MAGENTA << "testing: " << test << COLOR_RESET << std::endl;
		ScalarConverter::convert(test);
		
		test =  "nan";
	std::cout << "\n"<< COLOR_MAGENTA << "testing: " << test << COLOR_RESET << std::endl;
		ScalarConverter::convert(test);
		
		
		test =  "-17.00";
	std::cout << "\n"<< COLOR_MAGENTA << "testing: " << test << COLOR_RESET << std::endl;
		ScalarConverter::convert(test);
		
		test =  "+17.00";
	std::cout << "\n"<< COLOR_MAGENTA << "testing: " << test << COLOR_RESET << std::endl;
		ScalarConverter::convert(test);
	
	test =  "1797690.00";
	std::cout << "\n"<< COLOR_MAGENTA << "testing: " << test << COLOR_RESET << std::endl;
	ScalarConverter::convert(test);

			
		test =  "0.0";
	std::cout << "\n"<< COLOR_MAGENTA << "testing: " << test << COLOR_RESET << std::endl;
		ScalarConverter::convert(test);
				

		test = "-2147483648";
	std::cout << "\n"<< COLOR_MAGENTA << "testing: " << test << " int min" << COLOR_RESET << std::endl;
		ScalarConverter::convert(test);
		
		test = "2147483647";
	std::cout << "\n"<< COLOR_MAGENTA << "testing: " << test << " int max" << COLOR_RESET << std::endl;
		ScalarConverter::convert(test);
				
		test =  "-340282346638528859811704183484516925440.0000000000000000";
	std::cout << "\n"<< COLOR_MAGENTA << "testing: " << test << " float min" << COLOR_RESET << std::endl;
		ScalarConverter::convert(test);
		
		test =  "340282346638528859811704183484516925440.0000000000000000";
	 std::cout << "\n" << COLOR_MAGENTA << "testing: " << test << " float max" << COLOR_RESET << std::endl;
		ScalarConverter::convert(test);

	return (0);
}