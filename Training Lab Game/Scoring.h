//
//  Scoring.h
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#ifndef __Training_Lab_Game__Scoring__
#define __Training_Lab_Game__Scoring__

#include <iostream>
#include "Partie.h"

class Scoring : public Partie{
    public :
    
    int getScore() const;
    
    private :
    
    int m_budget, m_avancement, m_motiv, m_interetClient;
    
};



#endif /* defined(__Training_Lab_Game__Scoring__) */
