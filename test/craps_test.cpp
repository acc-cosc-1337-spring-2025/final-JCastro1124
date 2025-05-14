#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include <time.h>
#include "shooter.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


/*
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
*/

TEST_CASE("test shooter")
{
	
}


