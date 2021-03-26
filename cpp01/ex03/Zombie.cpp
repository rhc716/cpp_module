/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroh <hroh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:21:31 by hroh              #+#    #+#             */
/*   Updated: 2021/03/26 20:22:11 by hroh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->zombie_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->zombie_name << " is dead" << std::endl;
}

void Zombie::set_type(std::string type)
{
	this->zombie_type = type;
};

void Zombie::announce(void)
{
	std::cout << "<" << this->zombie_name << " (" << this->zombie_type << ")> "
	<< "Braiiiiiiinnnssss..." << std::endl;
};