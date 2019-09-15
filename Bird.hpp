 //Name: Richard John
//Instructor: Professor Ligorio
//Course: Computer Science 235 
//Assignment: Project 2 - Bird.hpp
//Date: September 9, 2019 
/*
Description: This is a class called Bird. 
It is an inherited class and it will inherit the class Animal. 
*/

#pragma once //ShortCut
#include <iostream>
#include "Animal.hpp" //We include Animal.hpp since Bird is inheriting animal's data members. 
using namespace std;

class Bird: public Animal{
    public:
        Bird(); //Constructor  
        Bird(string name, bool domestic = false, bool predator = false); //Constructor with values 0_0.
        bool isAirborne() const; //M. Function
        bool isAquatic() const; //M. Function
        void setAirborne() ; //M. Function
        void setAquatic() ; //M. Function 

    private: //private values of the class 
        bool airborne_; //Flight
        bool aquatic_; //Swimmable? 
};