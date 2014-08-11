//
//  PhaseUn.cpp
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#include "PhaseUn.h"
#include "Scoring.h"

using namespace std;

vector<int> PhaseUn::getScoring() const{
    
    vector<int> score(5, 0);
    score[0] = m_avancement;
    score[1] = m_budget;
    score[3] = m_motivGenerale;
    
    return score;
}

void PhaseUn::setMotivGenerale(int motivG){
    
    m_motivGenerale = motivG;
}

void PhaseUn::setMotivPerso(int motivP){
    
    m_motivPerso = motivP;
}

void PhaseUn::setBudget(int budget){
    
    m_budget = budget;
}

void PhaseUn::setAvancement(int avancement){
    
    m_avancement = avancement;
}