/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 19:26:27 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/11 19:26:29 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NinjaTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int				main(){

	srand((time(0)) * 2);
	FragTrap	robot_0;
	FragTrap	robot_2("Caroline");

	robot_0.rangedAttack("ROWBOAT");
	robot_0.meleeAttack("XATHRON, DESTROYER OF WORLDS");
	robot_0.takeDamage(42);
	robot_2 = robot_0;
	robot_0.beRepaired(13);
	FragTrap	robot_1  = robot_0;
	robot_0.beRepaired(420);
	robot_0.vaulthunter_dot_exe("WINTERGREEN");
	robot_0.takeDamage(420);
	std::cout << "______________ BOOP BOOP____________"<< std::endl;

	srand(time(0));
	ScavTrap	robot_3;
	ScavTrap	robot_4("Maurice");

	robot_3.rangedAttack("ROWBOAT");
	robot_3.meleeAttack("XATHRON, DESTROYER OF WORLDS");
	robot_3.takeDamage(42);
	robot_4 = robot_3;
	robot_3.beRepaired(13);
	ScavTrap	robot_5  = robot_3;
	robot_3.beRepaired(420);
	robot_3.challengeNewcomer("WINTERGREEN");
	robot_3.takeDamage(420);
	std::cout << "______________ BOOP BOOP____________"<< std::endl;

	srand((time(0)) * 3);
	NinjaTrap	robot_6;
	NinjaTrap	robot_8("Caroline");

	robot_6.rangedAttack("ROWBOAT");
	robot_6.meleeAttack("XATHRON, DESTROYER OF WORLDS");
	robot_6.takeDamage(42);
	robot_8 = robot_6;
	robot_6.beRepaired(13);
	NinjaTrap	robot_7  = robot_6;
	robot_6.beRepaired(420);
	robot_6.ninjaShoebox("WINTERGREEN");
	robot_6.takeDamage(420);
	return (0);
}
