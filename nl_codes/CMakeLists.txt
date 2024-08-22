#Dit is een CMakelists.txt om een  led te besturen met wiringPi c library in c++ .
cmake_minimum_required(VERSION 3.13) #zet de minium requirements voor cmake.
project(Wpitest1)



add_executable(nl_blink nl_blink.cpp ) #maakt de code uitvoerbaar.
# Nu link libraries hier:
target_link_libraries(nl_blink  ${WIRINGPI_LIBRARIES} -lwiringPi) #linkt de  wiringPi library door -lwiringPi uit te typen om  de code te bouwen.

