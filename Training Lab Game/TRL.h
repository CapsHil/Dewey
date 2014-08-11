//
//  TRL.h
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#ifndef __Training_Lab_Game__TRL__
#define __Training_Lab_Game__TRL__

#include <iostream>
#include "Employe.h"
#include <vector>

class TRL{
    
    public :
    
    TRL(std::string description);
    void setEmploye(Employe::Employe employe);
    void getMotivPerso(Employe::Employe employe);
    
    private :
    
    std::vector<Employe::Employe> equipe;
    std::string description;
    int m_creation, m_marketing, m_communication, m_scientifique;
};

#endif /* defined(__Training_Lab_Game__TRL__) */
