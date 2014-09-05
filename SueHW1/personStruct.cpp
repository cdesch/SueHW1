//
//  personStruct.cpp
//  SueHW1
//
//  Created by cj on 9/3/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include "personStruct.h"


//Prints full name
void PersonStruct::printName(){
    printf("%s %s \n", firstName.c_str(), lastName.c_str());
}