//
//  person.cpp
//  SueHW1
//
//  Created by cj on 9/3/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

//TODO:: Did the professor say to use Setters and getters? Or private/public attributes?

#include "person.h"

//Constructor with params
Person::Person(std::string last, std::string first){
    lastName = last;
    firstName = first;
}

//Deconstructor
Person::~Person(){
}

//Member Functions//
//Prints full name
void Person::printName(){
    printf("%s %s \n", firstName.c_str(), lastName.c_str());
}
