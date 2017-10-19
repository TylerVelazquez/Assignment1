/*
 * SimpleAxe.cpp
 *
 *  Created on: Oct 19, 2017
 *      Author: TylerVelazquez
 */

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {
	double damage;
	if (armor>0 && armor<20)
		damage = hitPoints;
	else if (armor>=20)
		damage= hitPoints-armor;
    if (damage < 0) {
        return 0;
    }
    return damage;
}
