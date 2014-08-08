//
//  Personnage.h
//  Training Lab Game
//
//  Created by Pierre RABY on 08/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#ifndef __Training_Lab_Game__Personnage__
#define __Training_Lab_Game__Personnage__

#include <string>
#include <vector>

class Personnage
{
    public :
    
    Personnage(std::string nom, int créa, int market, int com, int scient, int cost);
    void defDescription(std::string description);
    void defMotivation(int motiv);
    void defAffinite(std::vector<Personnage> affinite, std::vector<Personnage> antipathie);
    void afficherInfo(Personnage perso);
    
    private :
    
    int m_creation, m_marketing, m_communication, m_scientifique, m_cout, m_motivation;
    std::vector<Personnage> m_affinite, m_antipathie;
    std::string m_nom, m_description;
};

#endif /* defined(__Training_Lab_Game__Personnage__) */
