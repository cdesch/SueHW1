//
//  person.h
//  SueHW1
//
//  Created by cj on 9/3/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#ifndef SueHW1_person_h
#define SueHW1_person_h
#include <string>

class Person {
    
public:
    
    //Public attributes
    std::string lastName;
    std::string firstName;
    
    //Constructor
    Person(std::string last, std::string first);
    ~Person(); //Deconstructor
    
    //Member Functions//
    void printName();
    
};

#endif
