/*
 * CrazyRandomSword.h
 *
 *  Created on: Oct 19, 2017
 *      Author: TylerVelazquez
 */
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H_
#define CRAZYRANDOMSWORD_H_

/*
 * hitpoints = random integer number between 10 and 100.
 * Ignores a random amount of integer armor points,
 * ranging from to 0 to half of the armor the weapon hits.
 */
class CrazyRandomSword : public Weapon {
	double randomhp;
public:
	CrazyRandomSword() : Weapon("Crazy Random Sword", randomhp) {
    }
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);

};


#endif /* CRAZYRANDOMSWORD_H_ */
