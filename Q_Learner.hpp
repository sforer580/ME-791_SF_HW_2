//
//  Q_Learner.hpp
//  ME-791_SF_HW_2_project
//
//  Created by Scott S Forer on 2/22/17.
//  Copyright © 2017 Scott S Forer. All rights reserved.
//

#ifndef Q_Learner_hpp
#define Q_Learner_hpp

#include <stdio.h>

using namespace std;


class Q_Learner
{
    friend class Parameters;
    friend class Individual;
    friend class State;
    
protected:
    
    
public:
    Parameters* pP;
    
    vector<Individual> agent;
    int goal;
    
    void Build_Population();
    void Assign_Starting_Location();
    void Assign_Goal_Location();
    void Build_Grid_World();
    void Run_Program();
    
   
    
    
private:
};


//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------
//Builds population of individuals
void Q_Learner::Build_Population()
{
    for (int i=0; i<pP->num_indv; i++)
    {
        Individual I;
        agent.push_back(I);
        for (int s=0; s< pP->num_states; s++)
        {
            State S;
            agent.at(i).pos.push_back(S);
            agent.at(i).pos.at(s).number = s;
            agent.at(i).pos.at(s).active = 0;
        }
    }
}


//-------------------------------------------------------------------------
//Assigns the starting location for the agent
void Q_Learner::Assign_Starting_Location()
{
    int start = 0;
    agent.at(0).pos.at(start).active = 1;
}


//-------------------------------------------------------------------------
//Assigns the goal location
void Q_Learner::Assign_Goal_Location()
{
    int r = rand() % pP->num_states;
    goal = r;
}


//-------------------------------------------------------------------------
//Builds the grid world
void Q_Learner::Build_Grid_World()
{
    Build_Population();
    Assign_Starting_Location();
    Assign_Goal_Location();
}



//-------------------------------------------------------------------------
//Runs the enitre program
void Q_Learner::Run_Program()
{
    Build_Grid_World();
    
}

#endif /* Q_Learner_hpp */
