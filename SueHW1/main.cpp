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
///
//****Put any copied code***

//For Example, the stuff in the .h goes first
//Then the stuff in the .cpp . Make sure you leave out the #ifndefine and  #define. they are only for the headerfile only

///



void exerciseOne(){
  
    cout << "***Exercise 1***" << endl;
    PersonStruct chris;
    PersonStruct sue;
    chris.firstName = "chris";
    sue.firstName = "sue";
    
    Person bob("bobsFirstName","BobsLastname");
    //bob.firstName = "bobsFirstName"; //This step was done in the above line
    
    cout << chris.firstName << endl;
    cout << sue.firstName <<  endl;
    cout << bob.firstName << endl;
    
    chris.printName();
    sue.printName();
    bob.printName();
    
    cout << "***End Exercise 1***" << endl;
    
}

void exerciseTwo(){
    
    cout << "***Exercise 2***" << endl;
    //Create a person object
    PersonStruct person;
    person.firstName = "MyAuthorsFirstName";    //Set the first name
    person.lastName = "MyLastName";
    
    //Print the person's name:
    cout << person.firstName << " " << person.lastName << endl; //Print it manually via COUT
    //Top vs Bottom
    person.printName(); //Print the name again using the built in function in the struct.
    
    
    //Create a book object
    Book book("MyAwesomeBook", person, "MyPublisher",2014 ,3);
    book.printInfo();
    cout << "***End Exercise 2***" << endl;
}

void exerciseThree(){
    cout << "***Exercise 3***" << endl;
    cout << "***End Exercise 3***" << endl;
}

void exerciseFour(){
    cout << "***Exercise 4***" << endl;
    cout << "***End Exercise 4***" << endl;
}


int main(int argc, const char * argv[]){

    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << "Labe 1 \n";
    
    exerciseOne();
    exerciseTwo();
    exerciseThree();
    exerciseFour();

    return 0;
}

