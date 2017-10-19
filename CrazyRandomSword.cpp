/*
 * CrazyRandomSword.cpp
 *
 *  Created on: Oct 19, 2017
 *      Author: TylerVelazquez
 */

#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
	//create random hp between 10-100
	srand( time(0) );
	double r;
	r= rand()%90+10;
	randomhp=floor(r);

    double damage = hitPoints-rand()%(armor/2);
    if(damage < 0){
        return 0;
    }
    return damage;
}


