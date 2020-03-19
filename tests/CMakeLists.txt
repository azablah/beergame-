cmake_minimum_required(VERSION 3.10)

find_package(GTest REQUIRED)

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

add_executable(beergame-test 
                test.cpp
                ../src/Instructor.h
                ../src/Game.h
		../src/Factory.h
                ../src/Player.h)

target_link_libraries(beergame-test  
                    GTest::GTest GTest::Main)