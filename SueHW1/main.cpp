//
//  main.cpp
//  SueHW1
//
//  Created by cj on 9/3/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector> //Don't forget to include me!!
#include "person.h"
#include "book.h"
#include "personStruct.h"
#include <stdio.h>
#include <stdlib.h> //Don't forget to include me!!

using namespace std;
///
//****Put any copied code***

//For Example, the stuff in the .h goes first
//Then the stuff in the .cpp . Make sure you leave out the #ifndefine and  #define. they are only for the headerfile only

///


//Global Variables//
vector <Book> books; //My Vector of Books --  Don't forget to include the #include <vector> at the top.


//Generate Random Number between 1 and 10
int generateRandomNumber(){
    /* initialize random seed: */
    srand (time(NULL));   // Don't forget to include #include <stdlib.h>
    /* generate secret number between 1 and 10: */
    return rand() % 10 + 1;
}

//This function converts a string to an integer
//It returns a variable of type int
int converStringToInt(string myString){
    //atoi() isn't something you would normally know about it
    //Here is the documentation link http://www.cplusplus.com/reference/cstdlib/atoi/
    return atoi(myString.c_str());
}


void readFile(string filename){
    //File Format:
    /*
     Title
     Author
     Languge
     Year
     
     Sample:
     A Tale of Two Cities
     Charles Dickens
     English
     1859
     */
    
    std::ifstream infile(filename); //Open the file
    std::string str; //declar a string we can use for temporary storage
    
    //The while loop says "keep going while I can still get more lines in the file."
    //the getline() function will return the line in the str variable.
    while (std::getline(infile, str)){
        
        //We know the first line is going to the title
        string title = str;
        string author; //we haven't gotten it yet but should declar it early on.
        string language;
        string publisher = "No Publisher"; ///There is no publisher in the sample text
        int year;
        int rating = generateRandomNumber(); //there is no rating in the sample file!! Lets just generate a random number instead.
        
        //We know the next line is going to be the author-- we could just call getline(), but I chose to put it around an if statement incase it runs into a problem reading the end of the file.
        //This is where we might put a Try, Catch for exception handling when doing advanced programming later on in the semester.
        if (getline(infile, str)){
            author = str;
        }
        
        //Lets do the same with the rest of the variables
        if (getline(infile, str)){
            language = str;
        }
     
        if (getline(infile, str)){
            //year = str; //This throws an error if you uncomment it... why? str is of type string and year is of type int. We will need to convert the string to an integer. Since we will probably do this more than once, lets create a function that takes in strings and returns integers
            year = converStringToInt(str);
        }
        
        if (getline(infile, str)){
            rating = converStringToInt(str);
        }
        
        //Now we have all of our variables read from the file for 1 book. Lets create the book object
        
        //Book book(title, author, language, year, rating); //why won't this work? Its because the Book object constructor Book::Book(std::string t, PersonStruct a,std::string p, int y, int r) requires a object of type PersonStruct. We should create our author object first!!
        //But wait! PersonStruct object has firstName and lastName attributes!! Why do they make this sooooo painful? We will have to split them up first.
        // I know! I'll create a function that is part of the PersonStruct to handle that for me!!
        PersonStruct myAuthor;
        myAuthor.setFullName(author);
        
        Book book(title, myAuthor, language, publisher, year, rating);
        //Cool! Now I have the first book object!
        //Lets push it into our array!
        books.push_back(book);
        

    }
    
    //COOL! When this function completes, we will have a vector full of books!!
}

//This is for exercise 3 -- but this function will be included in our Library Object when we create it in exercise 4
void printBooks(){
    
    //We need to loop through each book!
    for (int i = 0; i < books.size(); i++){
        books[i].printInfo(); //Notice I bundle my printInfo() function the Book Class - Just like we did with PersonStruct
    }
}

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
    Book book("MyAwesomeBook", person, "my Language", "MyPublisher",2014 ,3);
    book.printInfo();
    cout << "***End Exercise 2***" << endl;
}

void exerciseThree(){
    cout << "***Exercise 3***" << endl;
    
    readFile("/Users/cj/Documents/xcodeProjects/apps/HelloWorldReadFile/HelloWorldReadFile/Book2.txt");
    printBooks();
    
    //TODO: Reverse Array
    //write Array to file reverse
    //read file reverse
    
    
    
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

