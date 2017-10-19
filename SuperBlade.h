/*
 * SuperBlade.h
 *
 *  Created on: Oct 19, 2017
 *      Author: TylerVelazquez
 */
#include <string>
#include "Weapon.h"

#ifndef SUPERBLADE_H_
#define SUPERBLADE_H_

/*
 * Defines the behavior of a Super Blade (Hitpoints=100, armor does not affect it)
 */

class SuperBlade : public Weapon {
public:

	SuperBlade() : Weapon("Super Blade", 40.0) {
    }
    virtual ~SuperBlade() {};
    virtual double hit(double armor);

};



#endif /* SUPERBLADE_H_ */
