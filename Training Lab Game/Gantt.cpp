//
//  Gantt.cpp
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#include "Gantt.h"

void Gantt::formation(Employe::Employe employe, int type){
    
    PhaseUn::setBudget(-1000);
    if(type == 1)
        employe.addCrea(1);
    else if(type == 2)
        employe.addMarket(1);
    else if(type == 3)
        employe.addCom(1);
    else if(type == 4)
        employe.addScient(1);
}

int Gantt::getMotivGenerale() const{
    
    int motivG(0);
    
    
    
    return motivG;
}