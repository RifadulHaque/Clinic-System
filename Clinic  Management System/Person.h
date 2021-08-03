#include<string>
#ifndef PERSON_H
#define PERSON_H

#include<iostream>

using namespace std;

class Person{
    protected:
    
        string Name;
        //string lastName;
        
    public:
        Person();
        Person(string);
        void setName(string);
        string getName();
      
        virtual void print()=0;

};

#endif
