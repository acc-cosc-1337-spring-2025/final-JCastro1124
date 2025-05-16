#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include <time.h>
#include "shooter.h"
#include "phase.h"
#include "point_phase.h"
#include "come_out_phase.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



TEST_CASE("Test die")
{
	die game;
	
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		std::cout<<game.Roll()<<"\n";
	}
}


TEST_CASE("test roll")
{
	die die_1;
	die die_2;
	roll game(die_1,die_2);
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		game.roll_dice();
		std::cout<<game.roll_value()<<"\n";
	}


TEST_CASE("test shooter")
{
	die die_1;
	die die_2;
	shooter shoot;
	roll* game;
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		game = shoot.throw_dice(die_1,die_2);
		game->roll_value();
		std::cout<<game->roll_value()<<"\n";
	}

}


TEST_CASE("Come out phase")
{
	die die_1;
	die die_2;
	shooter shoot;
	roll* roller;
	come_out_phase come;
	RollOutcome outcome;
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		roller = shoot.throw_dice(die_1,die_2);
		outcome = come.get_outcome(roller);
		cout <<"outcome: "<<static_cast<int>(outcome)<<"\n";
	}


}


TEST_CASE("point phase")
{
	die die_1;
	die die_2;
	shooter shoot;
	roll* roller;
	point_phase come(8);
	RollOutcome outcome;
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		roller = shoot.throw_dice(die_1,die_2);
		outcome = come.get_outcome(roller);
		cout <<"outcome: "<<static_cast<int>(outcome)<<"\n";
	}


}




