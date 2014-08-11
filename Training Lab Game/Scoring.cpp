//
//  Scoring.cpp
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#include "Scoring.h"

using namespace std;

vector<int> Scoring::getScore() const{
    
    vector<int> score(5);
    score[0] = m_avancement;
    score[1] = m_budget;
    score[2] = m_interetClient;
    score[3] = m_motiv;
    score[4] = m_offreClient;
    
    return score;
}

void Scoring::setScore(std::vector<int> newScore){
    
    vector<int> oldScore(0);
    oldScore = getScore();
    m_avancement = oldScore[0] + newScore[0];
    m_budget = oldScore[1] + newScore[1];
    m_interetClient = oldScore[2] + newScore[2];
    m_motiv = oldScore[3] + newScore[3];
    m_offreClient = oldScore[4] + newScore[4];
    
}



