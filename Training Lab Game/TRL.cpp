//
//  TRL.cpp
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#include "TRL.h"
#include <fstream>

using namespace std;

TRL::TRL(string description, int creation, int marketing, int communication, int scientifique) : m_description(description), m_creation(creation), m_marketing(marketing), m_communication(communication), m_scientifique(scientifique){
}

void TRL::afficherTRL(){
    
    cout << m_description << endl;
    cout << "Cela necessite : " << m_creation << " en création, " << m_marketing << " en marketing, " << m_communication << " en comm et " << m_scientifique << " en scientifique." << endl;
}


void TRL::addEmploye(){
    
    int choix, zut(1); char again('y'), i(1);
    vector<int> occupe;
    while(again == 'y'){
        cout << "Yoh" << endl;
        do{
            cin >> choix;
            for(int j=0; j<occupe.size(); j++){
                if(occupe[j] == choix){
                    cout << "Cet employé est déjà occupé !" << endl;
                    zut = 0;
                    break;
                }
                else
                    zut = 1;
            }
        }while(zut == 0);
        occupe.push_back(choix);
        
        ifstream file("/Users/Pierre/Desktop/Training Lab Game/Training Lab Game/employeForme.txt", ios::in);
        
        if(file)
        {
            char hashtag;
            string prenom, nom, test, name, oldName, description;
            int crea, market, com, scient, cost, mbti;
            while(getline(file, test)){
                
                file >> hashtag; file >> prenom; file >> nom; file >> crea; file >> market; file >> com; file >> scient; file >> cost; file >> mbti;
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
                    m_equipe.push_back(nom);
                    cout << nom.getNom() << " a bien été ajouté au projet en cours !" << endl;
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

int TRL::getMotivPerso(Employe::Employe employe){
    
    int mbti_profil[16][16];
    
    for(int i=0; i<16; i++){
        for(int j=0; j<16; j++){
            if(i == j)
                mbti_profil[i][j] = 0;
        }
    }
    mbti_profil[1][0] = 1;
    mbti_profil[2][0] = 1;
    mbti_profil[3][0] = 0;
    mbti_profil[4][0] = -1;
    mbti_profil[5][0] = -1;
    mbti_profil[6][0] = 0;
    mbti_profil[7][0] = 1;
    mbti_profil[8][0] = -1;
    mbti_profil[9][0] = -1;
    mbti_profil[10][0] = 0;
    mbti_profil[11][0] = 1;
    mbti_profil[12][0] = 0;
    mbti_profil[13][0] = 0;
    mbti_profil[14][0] = -1;
    mbti_profil[15][0] = 0;
    mbti_profil[2][1] = 1;
    mbti_profil[3][1] = 0;
    mbti_profil[4][1] = -1;
    mbti_profil[5][1] = -1;
    mbti_profil[6][1] = 0;
    mbti_profil[7][1] = 1;
    mbti_profil[8][1] = 0;
    mbti_profil[9][1] = -1;
    mbti_profil[10][1] = 1;
    mbti_profil[11][1] = 0;
    mbti_profil[12][1] = 0;
    mbti_profil[13][1] = -1;
    mbti_profil[14][1] = 1;
    mbti_profil[15][1] = 0;
    mbti_profil[3][2] = 1;
    mbti_profil[4][2] = -1;
    mbti_profil[5][2] = -1;
    mbti_profil[6][2] = 0;
    mbti_profil[7][2] = 1;
    mbti_profil[8][2] = 0;
    mbti_profil[9][2] = -1;
    mbti_profil[10][2] = 0;
    mbti_profil[11][2] = -1;
    mbti_profil[12][2] = 0;
    mbti_profil[13][2] = 0;
    mbti_profil[14][2] = 0;
    mbti_profil[15][2] = 0;
    mbti_profil[4][3] = 0;
    mbti_profil[5][3] = 0;
    mbti_profil[6][3] = 1;
    mbti_profil[7][3] = 0;
    mbti_profil[8][3] = 0;
    mbti_profil[9][3] = -1;
    mbti_profil[10][3] = 0;
    mbti_profil[11][3] = -1;
    mbti_profil[12][3] = 0;
    mbti_profil[13][3] = -1;
    mbti_profil[14][3] = -1;
    mbti_profil[15][3] = -1;
    mbti_profil[5][4] = 0;
    mbti_profil[6][4] = 0;
    mbti_profil[7][4] = -1;
    mbti_profil[8][4] = 1;
    mbti_profil[9][4] = 1;
    mbti_profil[10][4] = 1;
    mbti_profil[11][4] = 1;
    mbti_profil[12][4] = 0;
    mbti_profil[13][4] = 1;
    mbti_profil[14][4] = 1;
    mbti_profil[15][4] = 0;
    mbti_profil[6][5] = 0;
    mbti_profil[7][5] = -1;
    mbti_profil[8][5] = 1;
    mbti_profil[9][5] = 1;
    mbti_profil[10][5] = 0;
    mbti_profil[11][5] = -1;
    mbti_profil[12][5] = 1;
    mbti_profil[13][5] = -1;
    mbti_profil[14][5] = 0;
    mbti_profil[15][5] = 0;
    mbti_profil[7][6] = 0;
    mbti_profil[8][6] = 0;
    mbti_profil[9][6] = -1;
    mbti_profil[10][6] = 0;
    mbti_profil[11][6] = -1;
    mbti_profil[12][6] = -1;
    mbti_profil[13][6] = 0;
    mbti_profil[14][6] = -1;
    mbti_profil[15][6] = -1;
    mbti_profil[8][7] = -1;
    mbti_profil[9][7] = -1;
    mbti_profil[10][7] = -1;
    mbti_profil[11][7] = 0;
    mbti_profil[12][7] = 0;
    mbti_profil[13][7] = -1;
    mbti_profil[14][7] = 0;
    mbti_profil[15][7] = 0;
    mbti_profil[9][8] = 1;
    mbti_profil[10][8] = 0;
    mbti_profil[11][8] = -1;
    mbti_profil[12][8] = -1;
    mbti_profil[13][8] = 0;
    mbti_profil[14][8] = 0;
    mbti_profil[15][8] = 0;
    mbti_profil[10][9] = 1;
    mbti_profil[11][9] = 0;
    mbti_profil[12][9] = -1;
    mbti_profil[13][9] = 1;
    mbti_profil[14][9] = 0;
    mbti_profil[15][9] = 0;
    mbti_profil[11][10] = -1;
    mbti_profil[12][10] = -1;
    mbti_profil[13][10] = 1;
    mbti_profil[14][10] = -1;
    mbti_profil[15][10] = -1;
    mbti_profil[12][11] = 0;
    mbti_profil[13][11] = -1;
    mbti_profil[14][11] = 0;
    mbti_profil[15][11] = 0;
    mbti_profil[13][12] = -1;
    mbti_profil[14][12] = 0;
    mbti_profil[15][12] = 1;
    mbti_profil[14][13] = -1;
    mbti_profil[15][13] = -1;
    mbti_profil[15][14] = 0;
    int x(0);
    for(int j=0; j<16; j++){
        for(int i=0; i<x; i++){
            mbti_profil[i][j] = mbti_profil[j][i];
        }
        x++;
    }

    int motiv(0);
    int MBTI(employe.getMBTI());
    for(int x=0; x<m_equipe.size(); x++){
        motiv =  motiv + mbti_profil[m_equipe[x].getMBTI()][MBTI];
    }
    motiv = motiv / m_equipe.size();
    
    return motiv;
}
