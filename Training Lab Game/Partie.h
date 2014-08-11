//
//  Partie.h
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#ifndef __Training_Lab_Game__Partie__
#define __Training_Lab_Game__Partie__

#include <iostream>
#include <vector>

class Partie{
    
    public :
    
    void jouerTour();
    
    private :
    
    std::vector<int> m_objectif;
    
};

#endif /* defined(__Training_Lab_Game__Partie__) */
