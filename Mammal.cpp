//Name: Richard John
//Instructor: Professor Ligorio
//Course: Computer Science 235 
//Assignment: Project 2 - Mammal.hpp
//Date: September 9, 2019 
/*
Description: This is a class called Mammal. 
It is an inherited class and it will inherit the class Mammal. 
*/

#include <iostream>
#include "Mammal.hpp"
using namespace std;

Mammal::Mammal():Animal() { //This is a constructor and it sets every private variable to false. 
    hair_ = false;
    airborne_ = false;
    aquatic_ = false;
    toothed_ = false;
    fins_ = false; 
    tail_ = false; 
    legs_ = 0;
}

Mammal::Mammal(string name, bool domestic, bool predator):Animal(name, domestic, predator) { //This is another variable that also has parameters and sets every variable it has to false as well. 
    hair_ = false;
    airborne_ = false;
    aquatic_ = false;
    toothed_ = false;
    fins_ = false; 
    tail_ = false; 
    legs_ = 0;    
}

bool Mammal::hasHair() const{ //Tells you if the mammal has hair
    return hair_;
}

bool Mammal::isAirborne() const{ //Tells you if the mammal can fly. 
    return airborne_;
}

bool Mammal::isAquatic() const{ //Tells you if the mammal can swim. 
    return aquatic_;
}

bool Mammal::isToothed() const{ //Tells you if the mammal has teeth. 
    return toothed_;
}

bool Mammal::hasFins() const{ //Tells you if the mammal has fins. 
    return fins_;
}

bool Mammal::hasTail() const{ //Tells you if the mammal has a tail. 
    return tail_;
}

void Mammal::setLegs(int legs){ //Lets you set the amount of legs the mammal has. 
    legs_ = legs;
}

int Mammal::legs() const{ //Tells you how many legs the mammal has. 
    return legs_;
}

void Mammal::setHair() { //Lets you change the value of hair_ to true. 
    hair_ = true;
}

void Mammal::setAirborne(){ //Lets you change the value of airborne_ to true. 
    airborne_ = true;
}

void Mammal::setAquatic() { //Lets you change the value of aquatic_ to true.
    aquatic_ = true;
}

void Mammal::setToothed() { //Lets you change the value of toothed_ to true. 
    toothed_ = true;
}

void Mammal::setFins(){ //Lets you change the value of fins_ to true. 
    fins_ = true;
}

void Mammal::setTail(){ //Lets you change the values of tail_ to true. 
    tail_ = true;
}