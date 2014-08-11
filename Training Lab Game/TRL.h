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
#include "Partie.h"
#include "Employe.h"
#include <vector>

class TRL{
    
    public :
    
    TRL(std::string description, int creation, int marketing, int communication, int scientifique);
    void addEmploye(Employe::Employe employe);
    int getMotivPerso(Employe::Employe employe);
    
    private :
    
    std::vector<Employe::Employe> m_equipe;
    std::string m_description;
    int m_creation, m_marketing, m_communication, m_scientifique, m_debut, m_duree;
};

#endif /* defined(__Training_Lab_Game__TRL__) */
