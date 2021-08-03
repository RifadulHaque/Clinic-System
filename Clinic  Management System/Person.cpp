#include"Person.h"

Person::Person(){};

Person::Person(string n){
    Name=n;
    
}

void Person::setName(string n){
    Name=n;
}

 string Person::getName(){
     return Name;
 }

