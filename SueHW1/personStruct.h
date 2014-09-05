//
//  personStruct.h
//  SueHW1
//
//  Created by cj on 9/3/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//


//The assignment calls for a struct so we will give them a struct even though it is better implemented as a class

#ifndef SueHW1_personStruct_h
#define SueHW1_personStruct_h

#include <string>
struct PersonStruct {
    std::string lastName;
    std::string firstName;
    
    void printName();
    
};


#endif
