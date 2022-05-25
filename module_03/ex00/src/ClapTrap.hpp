/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:00:14 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/25 19:06:37 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

public:
	ClapTrap(ClapTrap const& claptrap);
	~ClapTrap(void);
	ClapTrap& operator=(ClapTrap const& claptrap);
	ClapTrap(std::string const& name);
	std::string	getName(void);
	int		getHitPoint(void);
	int		getEnergyPoint(void);
	int		getAttackDamage(void);
	void	attack(std::string const& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	printAttackSucces(std::string const target) const;
	void	printAttackFail(void) const;
	void	printTakeDamageSucces(unsigned int const amount) const;
	void	printTakeDamageFail(void) const;
	void	printRepairedSucces(unsigned int const amount) const;
	void	printRepairedFail(void) const;

private:
	ClapTrap(void);
	std::string const	name_;
	int			hitPoint_;
	int			energyPoint_;
	int			attackDamage_;

};

#endif // CLAPTRAP_HPP
