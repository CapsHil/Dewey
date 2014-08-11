//
//  Gantt.h
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#ifndef __Training_Lab_Game__Gantt__
#define __Training_Lab_Game__Gantt__

#include <iostream>
#include "PhaseUn.h"
#include "Employe.h"

class Gantt : public PhaseUn{
    
    public :
    
    int getMotivGenerale() const;
    void formation(Employe::Employe employe, int type);
    int setTRL();
    
    private :
    
};

#endif /* defined(__Training_Lab_Game__Gantt__) */
