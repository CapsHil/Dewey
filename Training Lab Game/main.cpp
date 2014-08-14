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
#include "TRL.h"
#include "Scoring.h"
#include "Gantt.h"

using namespace std;

void creationFichier(){
    
    ifstream fichier("employe.txt");
    ofstream flux("employeForme.txt");
    
    if(fichier){
        string ligne;
        
        while(getline(fichier, ligne)){
            if(flux)
                flux << ligne << endl;
            else
                cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
        }
    }
    else
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
}


double motivGenerale(){
    
    
    return 0;
}

void afficherEmploye(){
    
    int i(1);
    
    ifstream file("/Users/Pierre/Desktop/Training Lab Game/Training Lab Game/employe.txt", ios::in);
    
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
            cout << i << " - "; i++;
            nom.afficherInfo();
            cout << endl;
        }
        
        file.close();
    }
    else
        cerr << "Impossible d'ouvrir le fichier !" << endl;
}

int main() //int argc, const char * argv[]
{
    char former('n');
    int employe;
    Scoring Score;
    Gantt Gantt;
    vector<int> occupe;
    creationFichier();
    cout << "Voici la liste des employés :" << endl << endl;
    afficherEmploye();
    TRL Tache1("Nettoyer la cage de Francis et Dewey", 0, 0, 0, 10);
    TRL Tache2("Sortir Francis et Dewey", 10, 0, 10, 0);
    cout << "Voici la liste des TRL :" << endl << endl;
    Tache1.afficherTRL();
    cout << endl;
    Tache2.afficherTRL();
    
    do{
        cout << endl << "Souhaitez vous former un employés (1000€) ? (y/n)" << endl;
        cin >> former;
        if(former == 'y'){
            cout << "Quel employé voulez-vous former ? ";
            cin >> employe;
        }
            
    }while(former == 'y');
    
    Tache1.addEmploye();
    Tache2.addEmploye();
    
    return 0;
}



