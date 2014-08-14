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

void Employe::formation(int type){
    
    int choix; char again('y'), i(1);
    while(again == 'y'){
        
        ifstream file("/Users/Pierre/Desktop/Training Lab Game/Training Lab Game/employeForme.txt", ios::in);
        ofstream flux("/Users/Pierre/Desktop/Training Lab Game/Training Lab Game/employeForme.txt", ios::out);
        if(file)
        {
            char hashtag;
            string prenom, nom, test, name, oldName, description;
            int crea, market, com, scient, cost, mbti;
            while(getline(file, test)){
                
                file >> hashtag; file >> prenom; file >> nom;
                               
                file >> crea;
                file >> market;
                file >> com;
                file >> scient;
                file >> cost;
                file >> mbti;
                getline(file, description);
                getline(file, description);
                if (hashtag != '#')
                {
                    cerr << "Fichier mal remplie ou endommagé" << endl;
                    break;
                }
                name = prenom + " " + nom;
                if(i == choix){
                    Employe nom(name, crea, market, com, scient, cost, mbti, description);
                }
                if(oldName == name)
                    break;
                oldName = name;
                i++;
            }
            file.close();
        }
        else
            cerr << "Impossible d'ouvrir le fichier !" << endl;
        
        cout << "Ajouter encore un employe ? (y/n)" << endl;
        cin >> again;
    }
}


int Employe::getMBTI() const{
    
    return m_mbti;
}

string Employe::getNom(){
    
    return m_nom;
}

void Employe::addCrea(int i){
    
    m_creation = m_creation + i;
}

void Employe::addMarket(int i){
    
    m_marketing = m_marketing + i;
}

void Employe::addCom(int i){
    
    m_communication = m_communication + i;
}
void Employe::addScient(int i){
    
    m_scientifique = m_scientifique + i;
}




