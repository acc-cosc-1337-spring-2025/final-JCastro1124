#include "die.h"
#include "roll.h"
#include "phase.h"
#include "point_phase.h"
#include "come_out_phase.h"
#include "shooter.h"

using std::cin;
using std::cout;

int main() 
{
	srand(time(0));
	
	die die_1;
	die die_2;
	shooter shoot;
	roll* roller;
	roller = shoot.throw_dice(die_1,die_2);
	int rolled_value = roller->roll_value();

	come_out_phase comeout;

	while(comeout.get_outcome(roller) == RollOutcome::natural || 
	comeout.get_outcome(roller) == RollOutcome::craps)
	{
		cout<<rolled_value<<", roll again \n";
		roller = shoot.throw_dice(die_1,die_2);
	}
	
	cout<<"Rolled "<<rolled_value<<", start of point phase \n";
	cout<<"Roll until "<<rolled_value<<" or 7 \n";

	int point = roller->roll_value();
	roller = shoot.throw_dice(die_1,die_2);

	point_phase point_p(point);

	while(point_p.get_outcome(roller) != RollOutcome::seven_out || 
	point_p.get_outcome(roller) == RollOutcome::nopoint)
	{
		cout<<"Rolled "<<roller->roll_value()<<", roll again \n";
		roller = shoot.throw_dice(die_1,die_2);
	}
	cout<<roller->roll_value()<<"\n \n";
	shoot.display__rolled_value();

	return 0;
}