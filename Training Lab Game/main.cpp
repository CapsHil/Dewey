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

vector<Employe> initEmploye(){
    
    vector<Employe> employe;
    
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
            Employe francis(name, crea, market, com, scient, cost, mbti, description);
            employe.push_back(francis);
        }
        file.close();
    }
    else
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    return employe;
}

double motivGenerale(){
    
    
    return 0;
}

int main() //int argc, const char * argv[]
{
    char former('n'), add('n');
    vector<Employe> employe;
    vector<double> scoring(5);
    int choix, comp;
    Scoring score(10000);
    employe = initEmploye();
    cout << "Voici la liste des employés :" << endl << endl;
    for(int i=0; i<employe.size(); i++){
        cout << i+1 << " - ";
        employe[i].afficherInfo();
        cout << endl;
    }
    TRL Tache1("Nettoyer la cage de Francis et Dewey", 0, 0, 0, 10);
    TRL Tache2("Sortir Francis et Dewey", 10, 0, 10, 0);
    cout << endl << "Voici la liste des TRL :" << endl << endl;
    Tache1.afficherTRL();
    cout << endl;
    Tache2.afficherTRL();
    
    cout << endl << "Souhaitez vous former un employés (1000€) ? (y/n)" << endl;
    cin >> former;
    do{
    if(former == 'y'){
        cout << "Quel employé voulez-vous former ? : "; cin >> choix;
        cout << "Pour quel competence ? (1-Créa ; 2-Market ; 3-Comm ; 4-Scient) : "; cin >> comp;
        employe[choix-1].formation(comp);
        score.addToBudget(-1000);
        cout << "Former un autre employé ? (y/n)" << endl;
        cin >> former;
    }
    }while(former == 'y');
    
    for(int i=0; i<employe.size(); i++){
        cout << i+1 << " - ";
        employe[i].afficherInfo();
        cout << endl;
    }
    
    double motivTache1(0), motivTache2(0), motivG(0);
    cout << "Quels employés souhaitez vous ajouter pour la tâche 1 ?" << endl;
    do{
        cin >> choix;
        if(employe[choix-1].getOccupe() == 0){
            Tache1.addEmploye(employe[choix-1]);
            employe[choix-1].setOccupe();
            score.addToBudget(-(employe[choix-1].getCout()));
        }
        else
            cout << "Cet employé est déjà occupé..." << endl;
        cout << "Ajouter un nouvel employé ? (y/n)" << endl;
        cin >> add;
    }while(add == 'y');
    motivTache1 = Tache1.getMotivGeneral();
    
    cout << "Quels employés souhaitez vous ajouter pour la tâche 2 ?" << endl;
    do{
        cin >> choix;
        if(employe[choix-1].getOccupe() == 0){
            Tache2.addEmploye(employe[choix-1]);
            employe[choix-1].setOccupe();
            score.addToBudget(-(employe[choix-1].getCout()));
        }
        else
            cout << "Cet employé est déjà occupé..." << endl;
        cout << "Ajouter un nouvel employé ? (y/n)" << endl;
        cin >> add;
    }while(add == 'y');
    motivTache2 = Tache2.getMotivGeneral();
    motivG = (motivTache1 + motivTache2) / 2;
    score.setMotiv(motivG);
    
    scoring = score.getScore();
    for(int j=0; j<5; j++){
        cout << scoring[j] << endl;
    }
    
    return 0;
}






/*void afficherEmploye(){
 
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
 }*/
