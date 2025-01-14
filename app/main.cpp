//! "Copyright [2019] Jagadesh,ToyasDhake,ShivamAkhauri,ChinmayJoshi"
/**
* @file main.cpp
* @author Jagadesh NischalNagireddi,Toyas Dhake,ShivamAkhauri,ChinmayJoshi
* @date 26 Spetember 2019
* @brief This is a the main class for the PID implementation project
* PID controller implementation for mobile robot.
*/

#include <iostream>
#include "../include/PID.h"

/**
* @brief Main compute function for PID Controller
* @author Jagadesh Nagareddi, Toyas Dhake
*/
int main() {
    double change;
    // Contructor initializing value Kp, Kd, Ki, SampleTime, OutMax, OutMin
    PID mobileRobot(1, 1, 1, 13, 20, 0);
    // Main compute function
    change = mobileRobot.compute(0, 0);
    std::cout << "Computed velocity is: " << change << std::endl;
    return 0;
}
