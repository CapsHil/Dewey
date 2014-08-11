//
//  main.cpp
//  Training Lab Game
//
//  Created by Pierre RABY on 08/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Employe.h"

using namespace std;


void initialisation(){
    
    ifstream file("/Users/Pierre/Desktop/Training Lab Game/Training Lab Game/perso.txt", ios::in);
    
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
            if(oldName == name)
                break;
            oldName = name;
            Employe nom(name, crea, market, com, scient, cost, mbti, description);
            nom.afficherInfo();
        }
        
        file.close();
    }
    else
        cerr << "Impossible d'ouvrir le fichier !" << endl;
}

int main() //int argc, const char * argv[]
{
    initialisation();
    return 0;
}



