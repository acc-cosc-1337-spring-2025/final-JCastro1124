#include "die.h"

#ifndef ROLL
#define ROLL

class roll
{
public:
    roll(die& die_1, die& die_2) : die1(die_1), die2(die_2){}
    void roll_dice() {rolled_value = die1.Roll() + die2.Roll();};
    int roll_value() const{return rolled_value;};

private:
    die& die1;
    die& die2;
    int rolled_value;
};

#endif