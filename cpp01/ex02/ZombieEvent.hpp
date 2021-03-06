/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroh <hroh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:21:04 by hroh              #+#    #+#             */
/*   Updated: 2021/03/26 20:58:36 by hroh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# define USLEEPTIME 300000

# include "Zombie.hpp"
# include <ctime>
# include <unistd.h>

class ZombieEvent
{
private:
	
public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void		setZombieType(Zombie *zombie, std::string type);
	Zombie		*newZombie (std::string name);
	Zombie		*randomChump(void);
	void		zombies_life(Zombie *zombie);
};

#endif