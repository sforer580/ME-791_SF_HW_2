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
    friend class Enviornment;
    
protected:
    
    
public:
    int num_indv = 1;                   //must be 1
    int x_dim = 13;
    int y_dim = 13;
    int num_states = x_dim*y_dim;
    int goal_x = 10;                    //must be between 0 and x_dim-1 to be in bounds
    int goal_y = 10;                    //must be between 0 and y_dim-1 to be in bounds
    int agent_start_x = 5;             //must be between 0 and x_dim-1 to be in bounds
    int agent_start_y = 5;             //must be between 0 and y_dim-1 to be in bounds
    
    
    
    
private:
};


#endif /* Parameters_hpp */
