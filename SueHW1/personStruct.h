//
//  personStruct.h
//  SueHW1
//
//  Created by cj on 9/3/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//


//The assignment calls for a struct so we will give them a struct even though it is better implemented as a class

//These lines with #ifndefine and  #define are only for the headerfile.
#ifndef SueHW1_personStruct_h
#define SueHW1_personStruct_h

#include <string>
struct PersonStruct {
    
    //Public attributes
    std::string lastName;
    std::string firstName;
    
    void printName();
    std::string getName();
    void setFullName(std::string fullname);
};

//Same with this guy down here
#endif
