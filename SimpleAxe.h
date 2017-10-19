/*
 * SimpleAxe.h
 *
 *  Created on: Oct 19, 2017
 *      Author: TylerVelazquez
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H_
#define SIMPLEAXE_H_

/*
 * Defines the behavior of a Simple Axe (hitpoints= 60, if armor is less than 20
 * and greater than 0 than it ignores the armor)
 */

class SimpleAxe : public Weapon {
public:

		SimpleAxe() : Weapon("Simple Axe", 60.0){
		}
		virtual ~SimpleAxe() {};
		virtual double hit(double armor);


};

#endif /* SIMPLEAXE_H_ */
