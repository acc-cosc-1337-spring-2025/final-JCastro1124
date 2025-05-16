//
#include "point_phase.h"

RollOutcome point_phase::get_outcome(roll* rolled)
{
    if(rolled->roll_value() == point)
    {
        return RollOutcome::point;
    }
    else if (rolled->roll_value()==7)
    {
        return RollOutcome::seven_out;
    }
    else
    {
        return RollOutcome::nopoint;
    }
    
}