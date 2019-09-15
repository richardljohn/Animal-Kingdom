//Name: Richard John
//Instructor: Professor Ligorio
//Course: Computer Science 235 
//Assignment: Project 2 - Bird.hpp
//Date: September 9, 2019 
/*
Description: This is a class called Bird. 
It is an inherited class and it will inherit the class Animal. 
*/

#include <iostream>
#include "Bird.hpp" //We include bird.hpp so we can use the functions in the hpp. 
using namespace std;

Bird::Bird():Animal(){ //Two values are started off as false.
    airborne_ = false;
    aquatic_ = false; 
}

Bird::Bird(string name, bool domestic, bool predator):Animal(name, domestic, predator){ //This calls values of Animal too. 
    airborne_ = false;
    aquatic_ = false;
}

bool Bird::isAirborne() const { //Tells you the value of airborne_. 
    return airborne_;
}

bool Bird::isAquatic() const { //Tells you the value of aquatic_. 
    return aquatic_;
}

void Bird::setAirborne() { //This is the only way to change the value of the airborne_ variable. 
    airborne_ = true;
}

void Bird::setAquatic()  { //This is the only way to change the value of the aquatic_ variable. 
    aquatic_ = true;
}