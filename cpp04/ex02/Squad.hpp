/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroh <hroh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 16:42:42 by hroh              #+#    #+#             */
/*   Updated: 2021/04/02 17:31:10 by hroh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
	int				count;
	ISpaceMarine	**units;

public:
	Squad();
	Squad(Squad const &old_obj);
	~Squad();

	Squad &operator=(Squad const &old_obj);

	int getCount() const;
	ISpaceMarine* getUnit(int index) const;
	int push(ISpaceMarine *unit);
};
#endif