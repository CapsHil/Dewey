//
//  Scoring.cpp
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#include "Scoring.h"

using namespace std;

Scoring::Scoring(double budget) : m_budget(budget){}

void Scoring::setBudget(double budget){
    m_budget = budget;
}

void Scoring::addToBudget(double add){
    m_budget = m_budget + add;
}

void Scoring::setMotiv(double motiv){
    m_motiv = motiv;
}

vector<double> Scoring::getScore() const{
    
    vector<double> score(5);
    score[0] = m_avancement;
    score[1] = m_budget;
    score[2] = m_interetClient;
    score[3] = m_motiv;
    score[4] = m_offreClient;
    
    return score;
}



