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

Personnage::Personnage(string nom, int créa, int market, int com, int scient, int cost) : m_nom(nom), m_creation(créa), m_marketing(market), m_communication(com), m_scientifique(scient), m_cout(cost), m_motivation(0){
}

void Personnage::defDescription(string description){
    
    m_description = description;
}

void Personnage::defMotivation(int motiv){
    m_motivation = motiv;
}

void Personnage::defAffinite(vector<Personnage> affinite, vector<Personnage> antiphatie){
    
    for(int i(0); i<affinite.size(); i++){
        m_affinite[i] = affinite[i];
        m_antipathie[i] = antiphatie[i];
    }
}

void Personnage::afficherInfo(Personnage perso){
    
    cout << "Voici " << perso.m_nom << " avec les caractérisiques suivantes : " << perso.m_creation << " " << perso.m_marketing << " " << perso.m_communication << " " << perso.m_scientifique << " " << perso.m_cout << endl;
}



