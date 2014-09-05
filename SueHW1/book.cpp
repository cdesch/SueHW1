//
//  book.cpp
//  SueHW1
//
//  Created by cj on 9/3/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.

#include "book.h"
#include "personStruct.h"

//Constructor with params
Book::Book(std::string t, PersonStruct a,std::string l,std::string p, int y, int r){
    title = t;
    author = a;
    language = l;
    publisher = p;
    year = y;
    rating = r;
}

//Deconstructor
Book::~Book(){
}

//Member Functions//
void Book::printInfo(){
    printf("title: %s \n", title.c_str());
    printf("author: ");
    author.printName();
    printf("publisher: %s \n", publisher.c_str());
    printf("year: %d \n", year);
    printf("rating: %d \n", rating);
}


//Setters and getters
//This is a bad design decision but for the sake of the assignment we will build these in. These are to access any private variables.

//GETTERS//
std::string Book::getTitle(){
    return title;
}

//TODO: Create Getters for all the rest of the object attributes .... PersonStruct, publisher, year, rating... etc. Remember to put the function declarations in the header file****

//SETTERS//

void Book::setTitle(std::string t){
    title = title;
}

//TODO: Create Setters for all the rest of the object attributes .... PersonStruct, publisher, year, rating... etc. Remember to put the function declarations in the header file****