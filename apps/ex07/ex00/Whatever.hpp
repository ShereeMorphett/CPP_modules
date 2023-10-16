/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:10:28 by smorphet          #+#    #+#             */
/*   Updated: 2023/10/16 17:12:58 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T &val1, T &val2)
{
	T temp;
	
	temp = val1;
	val1 = val2;
	val2 = temp;
}

template <typename T>
 T min(T val1, T val2)
{
	if (val1 <= val2)
		return val1;
	else
		return val2;	
}

template <typename T>
T max(T val1, T val2)
{
	if (val1 >= val2)
		return val1;
	else
		return val2;
}
