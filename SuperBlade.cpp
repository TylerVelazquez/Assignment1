/*
 * SuperBlade.cpp
 *
 *  Created on: Oct 19, 2017
 *      Author: TylerVelazquez
 */

#include "SuperBlade.h"


double SuperBlade::hit(double armor){
    double damage = hitPoints;
    if(damage < 0){
        return 0;
    }
    return damage;
}


