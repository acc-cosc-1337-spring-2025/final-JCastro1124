//
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include <string>
#include <iostream>
#include "phase.h"

#ifndef Point_Phase
#define Point_Phase

class point_phase : public phase
{
public:
    point_phase(int p) : point(p){}
    RollOutcome get_outcome(roll* rolled);

private:
    int point;


};



#endif