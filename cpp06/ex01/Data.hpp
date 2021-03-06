/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroh <hroh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:26:53 by hroh              #+#    #+#             */
/*   Updated: 2021/04/07 18:44:04 by hroh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <ctime>
# include <unistd.h>
# include <cstdlib>
# include <limits>

struct Data
{
	std::string s1;
	int			n;
	std::string s2;
};

void *serialize(void);
Data *deserialize(void *raw);

#endif