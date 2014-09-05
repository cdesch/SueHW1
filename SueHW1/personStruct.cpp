//
//  personStruct.cpp
//  SueHW1
//
//  Created by cj on 9/3/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include "personStruct.h"
#include <vector> //I need this for my string split
#include <sstream>

//Prints full name
void PersonStruct::printName(){
    printf("%s %s \n", firstName.c_str(), lastName.c_str());
}


//returns the person's name as one string
std::string PersonStruct::getName(){
    return firstName + " " + lastName;
}

//Takes in a fullname and splits it at ' ' (space) and saves it to firstName and lastName
void PersonStruct::setFullName(std::string fullname){

    //This part is a bit more advanced - a beginner solution would be to change the string into a character array and look for the space in the string. After you find the index of the space, you can assign the rest out to the variables by looping.
    std::stringstream myString(fullname);
    std::string segment;
    std::vector<std::string> seglist;

    //Firstname
    if (std::getline(myString, segment, ' ')){
        firstName = segment;
    }
    //Lastname
    if (std::getline(myString, segment, ' ')){
        lastName = segment;
    }
    
}
