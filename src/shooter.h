//
#include "roll.h"
#include "die.h"
#include <memory>

#ifndef SHOOTER
#define SHOOTER
class shooter
{
public:
    roll* throw_dice(die& die_1, die& die_2);
    void display__rolled_value();
    ~shooter()
    {
        for (roll* roll_p : rolls) {
            delete roll_p;
        }
        rolls.clear();
    }

private:
    vector<roll*> rolls;

};

#endif
