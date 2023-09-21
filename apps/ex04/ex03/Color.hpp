/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Color.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:46:45 by jebouche          #+#    #+#             */
/*   Updated: 2023/09/19 18:47:47 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_HPP
# define COLOR_HPP

#include <iostream>
// Define color escape sequences
# define COLOR_RESET "\033[0m"
# define COLOR_BLACK "\033[30m"
# define COLOR_RED "\033[31m"
# define COLOR_GREEN "\033[32m"
# define COLOR_YELLOW "\033[33m"
# define COLOR_BLUE "\033[34m"
# define COLOR_MAGENTA "\033[35m"
# define COLOR_CYAN "\033[36m"
# define COLOR_WHITE "\033[37m"
# define COLOR_BRIGHT_BLACK "\033[90m"
# define COLOR_BRIGHT_RED "\033[91m"
# define COLOR_BRIGHT_GREEN "\033[92m"
# define COLOR_BRIGHT_YELLOW "\033[93m"
# define COLOR_BRIGHT_BLUE "\033[94m"
# define COLOR_BRIGHT_MAGENTA "\033[95m"
# define COLOR_BRIGHT_CYAN "\033[96m"
# define COLOR_BRIGHT_WHITE "\033[97m"

# define BGCOLOR_WHITE_RED "\033[31;47m"
# define BGCOLOR_WHITE_PURPLE "\033[1;35;47m"
# define BGCOLOR_BLUE_GREEN "\033[32;44m"
# define BGCOLOR_BLUE_YELLOW "\033[1;33;44m"
# define BGCOLOR_RED_YELLOW "\033[1;33;41m"
# define BGCOLOR_PURPLE_YELLOW "\033[1;33;45m"
# define BGCOLOR_PURPLE_BLUE "\033[1;36;45m"
# define BGCOLOR_GREEN_YELLOW "\033[1;33;42m"

// RAII helper type for setting and re-setting colour
// Resource Acquisition Is Initialization
// class StreamColour
// {
// 	private:
// 		std::ostream& out_;
		
// 	public:
// 		StreamColour(std::ostream& out, const char* col)
// 			: out_(out)
// 		{
// 			out_ << col;
// 		}

// 		StreamColour(const char* col)
// 			: StreamColour(std::cout, col)
// 		{
// 		}

// 		~StreamColour()
// 		{
// 			out_ << COLOR_RESET;
// 		}
// };



#endif
