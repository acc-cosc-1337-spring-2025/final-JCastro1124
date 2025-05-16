//
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include <string>
#include <iostream>
#include "phase.h"

#ifndef COME_OUT_PHASE
#define COME_OUT_PHASE

class come_out_phase : public phase
{
public:
     RollOutcome get_outcome(roll* rolled);


private:




};




#endif

