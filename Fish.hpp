//Name: Richard John
//Instructor: Professor Ligorio
//Course: Computer Science 235 
//Assignment: Project 2 - Fish.hpp
//Date: September 9, 2019 
/*
Description: This is a class called Fish. 
It is an inherited class and it will inherit the class Animal. 
*/

#pragma once //ShortCut
#include <iostream>
#include "Animal.hpp" //We include Animal.hpp since Fish is inheriting animal's data members. 
using namespace std;

class Fish: public Animal{
    public:
        Fish(); //Constructor.
        Fish(string name, bool domestic = false, bool predator = false); //Constructer with values 0_0. 
        bool isVenomous() const; 
        void setVenomous();
        
    private: //Private variables
        bool venemous_; //Are you poisonous?
};