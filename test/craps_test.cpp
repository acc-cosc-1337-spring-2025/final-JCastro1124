#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include <time.h>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



TEST_CASE("Test roll")
{
	die game;
	
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		std::cout<<game.roll<<"\n";
	}
}
