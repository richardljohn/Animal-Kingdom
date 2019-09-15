//Name: Richard John
//Instructor: Professor Ligorio
//Course: Computer Science 235 
//Assignment: Project 2 - Mammal.hpp
//Date: September 9, 2019 
/*
Description: This is a class called Mammal. 
It is an inherited class and it will inherit the class Animal. 
*/

#pragma once //Basically a short cut for the inifdef or whatever its called LOL. 
#include <iostream>
#include "Animal.hpp" //We include Animal.hpp since Mammal is inheriting animal's data members. 
using namespace std;

class Mammal: public Animal 
{
    public: //These functions are what allow us to access the private data memebers.
        Mammal(); //Constructer. 
        Mammal(string name, bool domestic = false, bool predator = false); //Constructer with values. 0_0
        bool hasHair() const; 
        bool isAirborne() const; 
        bool isAquatic() const;
        bool isToothed() const;
        bool hasFins() const;
        bool hasTail() const;
        int legs() const;
        void setHair();
        void setAirborne();
        void setAquatic();
        void setToothed();
        void setFins();
        void setTail();
        void setLegs(int legs_); 
    
    private: //private variables that show what the mammal has. 
        bool hair_; //Hair
        bool airborne_; //Flight
        bool aquatic_; //Native to water
        bool toothed_; //Has teeth
        bool fins_; //Has fins
        bool tail_; //Has a tail
        int legs_; //How many legs it has. 
}; 