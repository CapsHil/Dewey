//
//  Employe.h
//  Training Lab Game
//
//  Created by Pierre RABY on 08/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#ifndef __Training_Lab_Game__Employe__
#define __Training_Lab_Game__Employe__

#include <string>
#include <vector>

class Employe
{
    public :
    
    Employe(std::string nom, int créa, int market, int com, int scient, int cost, int mbti, std::string description);
    ~Employe();
    void changeMotivation(int motiv);
    void afficherInfo() const;
    int getMBTI() const;
    std::string getNom();
    void addCrea(int i);
    void addMarket(int i);
    void addCom(int i);
    void addScient(int i);
    
    private :
    
    int m_creation, m_marketing, m_communication, m_scientifique, m_cout, m_motivation, m_mbti;
    std::string m_nom, m_description;
};

#endif /* defined(__Training_Lab_Game__Employe__) */
