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
#include "Personnage.h"
#include <fstream>

using namespace std;

int main(int argc, const char * argv[])
{
    ifstream file("/Users/Pierre/Desktop/Training Lab Game/Training Lab Game/perso.txt", ios::in);  // on ouvre en lecture
    
    if(file)  // si l'ouverture a fonctionné
    {
        char hashtag;
        string prenom, nom, test, name;
        int crea, market, com, scient, cost;
        while(getline(file, test)){
            file >> hashtag; file >> prenom; file >> nom; file >> crea; file >> market; file >> com; file >> scient; file >> cost;
            if (hashtag != '#')
            {
                cerr << "Fichier mal remplie ou endommagé" << endl;
                break;
            }
            name = prenom + " " + nom;
            Personnage perso(name, crea, market, com, scient, cost);
            perso.afficherInfo(perso);
        }
        
        file.close();
    }
    else
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    
    return 0;
}



