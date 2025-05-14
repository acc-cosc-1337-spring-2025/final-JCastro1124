//
#include <iostream>
#include <vector>
#include <random>


using std::vector;

#ifndef DIE
#define Die
class die
{
public:
    int roll() {return sides[rand() %6];};



private:
    vector <int> sides {1,2,3,4,5,6}; 



};

#endif


