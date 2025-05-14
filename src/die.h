//
#include <iostream>
#include <vector>
#include <random>


using std::vector;

#ifndef DIE
#define DIE

class die
{
public:
    int Roll() {return sides[rand() %6];};



private:
    vector <int> sides {1,2,3,4,5,6}; 



};

#endif


