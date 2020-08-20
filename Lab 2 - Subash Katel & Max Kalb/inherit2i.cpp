#include <iostream>
using namespace std;
#include <string>
#include "inherit2.h"
using namespace std;

//!< function that prints out the person name
void personType::print() const
{
    cout<<firstName<<" "<<lastName;
}

//!< function the assign the first and the last name
void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

void personType::getName(string& first, string& last)
{
    first = firstName;
    last = lastName;
}

//!< constructor with parameters
personType::personType(string first, string last)
{
    firstName = first;
    lastName = last;
}

//!<default constructor
personType::personType()
{
    firstName = "";
    lastName = "";
}
