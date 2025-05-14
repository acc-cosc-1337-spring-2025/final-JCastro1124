//
#include "shooter.h"

roll* shooter::throw_dice(die& die_1, die& die_2)
{
    roll* roll_intstance = new roll(die_1,die_2);
    roll_intstance->roll_dice();
    rolls.push_back(roll_intstance);
    return roll_intstance;
}

void shooter::display__rolled_value()
{
    for (roll* roll_p : rolls)
    {
        std::cout<<roll_p->roll_value()<<"\n";
    }
}