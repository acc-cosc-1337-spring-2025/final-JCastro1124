//
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include <string>
#include <iostream>

using namespace std;

#ifndef PHASE
#define PHASE
enum class RollOutcome
{
        natural,
        craps,
        point,
        seven_out,
        nopoint,
};

class phase
{
public:
    
    RollOutcome get_outcome(roll* rolled);


private:




};





#endif