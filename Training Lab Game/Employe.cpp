//
//  Employe.cpp
//  Training Lab Game
//
//  Created by Pierre RABY on 08/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#include "Employe.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

Employe::Employe(string nom, int créa, int market, int com, int scient, int cost, int mbti, string description) : m_nom(nom), m_creation(créa), m_marketing(market), m_communication(com), m_scientifique(scient), m_cout(cost), m_mbti(mbti), m_description(description), m_motivation(0){
}

void Employe::changeMotivation(int motiv){
    m_motivation = motiv;
}

void Employe::afficherInfo() const{
      cout << m_nom << " avec les caractérisiques suivantes : " << m_creation << " " << m_marketing << " " << m_communication << " " << m_scientifique << " " << m_mbti << " " << m_cout << endl << m_description << endl;
}





