#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

//extern "C"
//{
#include "duration.h"
//}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("constructor")
{
    Duration timer;
    REQUIRE(timer.getDuration()==0);
    Duration timer1(15);
    REQUIRE(timer1.getDuration()==15);
}

TEST_CASE("tick")
{
    Duration timer;
    timer.tick();
    REQUIRE(timer.getDuration()==1);
    timer.tick();
    REQUIRE(timer.getDuration()==2);
    timer.tick(5);
    REQUIRE(timer.getDuration()==7);
    timer.tick(15);
    REQUIRE(timer.getDuration()==22);
}

TEST_CASE("alarm")
{
    Duration timer;
    timer.setAlarm(10);
    REQUIRE(timer.tick() == false);
    REQUIRE(timer.checkAndUpdateAlarm() == false);
    REQUIRE(timer.tick(10) == true);
    REQUIRE(timer.tick() == false);
}


