//
//  PhaseUn.h
//  Training Lab Game
//
//  Created by Pierre RABY on 11/08/2014.
//  Copyright (c) 2014 Pierre RABY. All rights reserved.
//

#ifndef __Training_Lab_Game__PhaseUn__
#define __Training_Lab_Game__PhaseUn__

#include <iostream>
#include "Tour.h"

class PhaseUn : public Tour{
    
    public :
    
    std::vector<int> getScoring() const;
    void setMotivGenerale(int motivG);
    void setMotivPerso(int motivP);
    void setBudget(int budget);
    void setAvancement(int avancement);
    void save();
    
    private :
    
    int m_motivGenerale, m_motivPerso, m_budget, m_avancement;
    
};

#endif /* defined(__Training_Lab_Game__PhaseUn__) */
