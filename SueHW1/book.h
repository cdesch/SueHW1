//
//  book.h
//  SueHW1
//
//  Created by cj on 9/3/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#ifndef SueHW1_book_h
#define SueHW1_book_h
#include <string>
#include "personStruct.h"

class Book {
    
private:
    std::string title;
    PersonStruct author;
    std::string publisher;
    std::string language;
    int rating;
    int year;
    
public:
    //Constructor
    Book(std::string t, PersonStruct a,std::string p, int y, int r);
    //Deconstructor
    ~Book();
    
    //Member functions//
    void printInfo();
    
    //Getters//
    std::string getTitle();
    
    //Setters//
    void setTitle(std::string t);
    
    
};


#endif
