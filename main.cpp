//
//  main.cpp
//  ME-791_SF_HW_2_project
//
//  Created by Scott S Forer on 2/22/17.
//  Copyright © 2017 Scott S Forer. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <ctime>
#include <random>

#include "Parameters.hpp"
#include "State.hpp"
#include "Individual.hpp"
#include "Q_Learner.hpp"


int main()
{
    srand(time(NULL));
    Parameters P;
    Q_Learner Q;
    Q.pP = &P;
}
