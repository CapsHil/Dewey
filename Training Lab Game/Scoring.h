//
//  Scoring.h
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#ifndef __Training_Lab_Game__Scoring__
#define __Training_Lab_Game__Scoring__

#include <iostream>
#include <vector>
#include "Partie.h"

class Scoring : public Partie{
    
    public :
    
    Scoring(double budget);
    
    std::vector<double> getScore() const; // Retourne un <vector> contenant : avancement, budget, interet des clients, motiv, et meilleure offre des clients.
    void setScore(std::vector<int> newScore);
    void setBudget(double budget);
    void setMotiv(double motiv);
    void addToBudget(double budget);
    
    private :
    
    double m_budget, m_avancement, m_motiv, m_interetClient, m_offreClient;
    
};



#endif /* defined(__Training_Lab_Game__Scoring__) */
