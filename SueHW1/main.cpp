//
//  main.cpp
//  SueHW1
//
//  Created by cj on 9/3/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include <iostream>
#include <string>
#include "person.h"
#include "book.h"
#include "personStruct.h"
#include <stdio.h>

using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    
    //Create a person object
    PersonStruct person;
    person.firstName = "MyAuthorsFirstName";    //Set the first name
    person.lastName = "MyLastName";
    cout << person.firstName << " " << person.lastName << endl;; //Print it manually via COUT
    person.printName(); //Print the name again using the built in function in the struct.
    
    //Create a book object
    Book book("MyAwesomeBook", person, "MyPublisher",2014 ,3);
    book.printInfo();
    
    
    
    return 0;
}

