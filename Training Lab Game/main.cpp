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

using namespace std;


void afficherEmploye(){
    
    int i(1);
    
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
            cout << i << " - "; i++;
            nom.afficherInfo();
            cout << endl;
        }
        
        file.close();
    }
    else
        cerr << "Impossible d'ouvrir le fichier !" << endl;
}

void ajouterEmploye(int choix){
    
    int i(1);
    
    ifstream file("/Users/Pierre/Desktop/Training Lab Game/Training Lab Game/perso.txt", ios::in);
    
    if(file)
    {
        char hashtag;
        string prenom, nom, test, name, oldName, description;
        int crea, market, com, scient, cost, mbti;
        while(getline(file, test)){
            if(i == choix){
                file >> hashtag; file >> prenom; file >> nom; file >> crea; file >> market; file >> com; file >> scient; file >> cost; file >> mbti;
                getline(file, description);
                getline(file, description);
                if (hashtag != '#')
                {
                    cerr << "Fichier mal remplie ou endommagé" << endl;
                    break;
                }
                name = prenom + " " + nom;
                Employe nom(name, crea, market, com, scient, cost, mbti, description);
            }
            if(oldName == name)
                break;
            oldName = name;
        }
        
        file.close();
    }
    else
        cerr << "Impossible d'ouvrir le fichier !" << endl;
}

int main() //int argc, const char * argv[]
{
    int choix, zut(1); char again('y');
    vector<int> occupe;
    TRL Tache("Nettoyer la cage de Francis et Dewey", 4, 0, 5, 16);
    cout << "Veuillez choisir vos employés pour la tache 1 :" << endl << endl;
    afficherEmploye();
    
    while(again == 'y'){
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
        int i(1);
        
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
                if(i == choix){
                    Employe nom(name, crea, market, com, scient, cost, mbti, description);
                    Tache.addEmploye(nom);
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
    
    
    return 0;
}



