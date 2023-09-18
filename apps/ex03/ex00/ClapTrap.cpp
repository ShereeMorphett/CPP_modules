/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <smorphet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:55:27 by smorphet          #+#    #+#             */
/*   Updated: 2023/09/18 10:53:09 by smorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ClapTrap.hpp>



int ClapTrap::GetAttackDamage()
{
	return AttackDamage_;
}

std::string ClapTrap::GetName()
{
	return name_;
}

void ClapTrap::attack(const std::string& target)
{
	if (EnergyPoints_ > 0 && HitPoints_ > 0)
	{
		std::cout << COLOR_MAGENTA << "ClapTrap " << name_<< " attacks "<< target << " causing " << AttackDamage_ << " damage!" << COLOR_RESET << std::endl;
		EnergyPoints_--;
	}
	else
	{
		if (EnergyPoints_ > 0)
			std::cout << COLOR_RED << "ClapTrap " << name_<< " has no more energy! It cannot be attack! "<< COLOR_RESET << std::endl;
		else
			std::cout << COLOR_RED << "ClapTrap " << name_<< " has no more HP! It cannot be attack! "<< COLOR_RESET << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints_ > 0)
	{
		std::cout << COLOR_RED << "ClapTrap " << name_<< " was hit! " << "It caused " << amount << " damage!" << COLOR_RESET << std::endl;
		HitPoints_ -= amount;
	}
	else
		std::cout << COLOR_RED << "ClapTrap " << name_<< " is dead stop hitting it!"<< COLOR_RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints_ > 0 && HitPoints_ > 0)
	{
		std::cout << COLOR_GREEN << "ClapTrap " << name_<< " was healed! " << "It regained " << amount << " of HP." << COLOR_RESET << std::endl;
		EnergyPoints_--;
		HitPoints_ += amount;
	}
	else
	{
		if (EnergyPoints_ > 0)
			std::cout << COLOR_RED << "ClapTrap " << name_<< " has no more energy! It cannot be repaired! "<< COLOR_RESET << std::endl;
		else
			std::cout << COLOR_RED << "ClapTrap " << name_<< " has no more HP! It cannot be repaired! "<< COLOR_RESET << std::endl;
	}
	
}

ClapTrap& ClapTrap::operator=(ClapTrap const &right)
{
	this->name_ = right.name_;
	this->HitPoints_ = right.HitPoints_;
	this->EnergyPoints_ = right.EnergyPoints_;
	this->AttackDamage_ = right.AttackDamage_;
	return (*this);
}

ClapTrap::ClapTrap(std::string id)
{	
	name_ = id;
	std::cout << "ClapTrap constructor called" << std::endl;
}


ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}