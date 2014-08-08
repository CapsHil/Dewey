//
//  Personnage.cpp
//  Training Lab Game
//
//  Created by Pierre RABY on 08/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#include "Personnage.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Personnage::defCaracteristique(string nom, int créa, int market, int com, int scient, int cost){
    
    m_nom = nom;
    m_création = créa;
    m_marketing = market;
    m_communication = com;
    m_scientifique = scient;
    m_cout = cost;
    cout << "Création de " << nom << " avec " << créa << " en création, " << market << " en marketing, " << com << " en communication et "<< scient << " en scientifique."<< endl;
}

void Personnage::defDescription(string description){
    
    m_description = description;
}

void Personnage::defMotivation(int motiv){
    m_motivation = motiv;
}

void Personnage::defAffinité(vector<Personnage> affinite, vector<Personnage> antiphatie){
    
    for(int i(0); i<affinite.size(); i++){
        m_affinite[i] = affinite[i];
        m_antipathie[i] = antiphatie[i];
    }
}



