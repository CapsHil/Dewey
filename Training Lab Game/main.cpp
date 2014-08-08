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

using namespace std;

int main(int argc, const char * argv[])
{
    vector<Personnage> affinite, antipathie;
    
    Personnage steve_jobs;
    steve_jobs.defCaracteristique("Steve Jobs", 1, 3, 0, 2, 100);
    steve_jobs.defAffinité(affinite, antipathie);
    
    return 0;
}

