//Name: Richard John
//Instructor: Professor Ligorio
//Course: Computer Science 235 
//Assignment: Project 2 - Fish.hpp
//Date: September 9, 2019 
/*
Description: This is a class called Fish. 
It is an inherited class and it will inherit the class Animal. 
*/

#include <iostream>
#include "Fish.hpp" //We include Fish.hpp to use the functions in the hpp. 
using namespace std;

Fish::Fish():Animal(){ //Constructor. 
    venemous_ = false;
}

Fish::Fish(string name, bool domestic, bool predator):Animal(name, domestic, predator){ //Constructor with values 0_0. 
    venemous_ = false;
}

bool Fish::isVenomous() const{ //Tells you the value of venemous_.
    return venemous_;
} 

void Fish::setVenomous(){ //Only way to change venemous_'s value. 
    venemous_ = true;
}