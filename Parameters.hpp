//
//  Parameters.hpp
//  ME-791_SF_HW_2_project
//
//  Created by Scott S Forer on 2/22/17.
//  Copyright © 2017 Scott S Forer. All rights reserved.
//

#ifndef Parameters_hpp
#define Parameters_hpp

#include <stdio.h>

using namespace std;


class Parameters
{
    friend class Q_Learner;
    friend class Individual;
    friend class State;
    
protected:
    
    
public:
    int num_indv = 1;
    int x_dim = 13;
    int y_dim = 13;
    int num_states = x_dim*y_dim;
    
    
    
    
private:
};


#endif /* Parameters_hpp */
