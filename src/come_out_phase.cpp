#include "come_out_phase.h"

RollOutcome come_out_phase::get_outcome(roll* rolled)
{
    if(rolled->roll_value() == 7 || rolled->roll_value() == 11)
    {
        return RollOutcome::natural;
    }
    else if(rolled->roll_value() == 2 || rolled->roll_value() == 3 || rolled->roll_value() == 12)
    {
        return RollOutcome::craps;
    }
    else
    {
        return RollOutcome::point;
    }
    
    
}