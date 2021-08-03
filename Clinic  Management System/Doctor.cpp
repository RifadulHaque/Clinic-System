#include"Doctor.h"


Doctor::Doctor():Person(){
   
}

Doctor::Doctor(string n, string sList, string mL):Person(n){
    specialist=sList;
    medicalLisence=mL;
    

}

void Doctor::setSpecialist(string sList){
    specialist=sList;
}

string Doctor:: getSpecialist(){
    return specialist;
}

void Doctor::setMedicalLisence(string mL){
    medicalLisence=mL;
}

string Doctor::getMedicalLisence(){
    return medicalLisence;
}

/*
void Doctor:: setAvailability(bool avail){
    availability=avail;
}

bool Doctor:: getAvailability(){
    return availability;
}

*/

void Doctor::print(){
    cout<<"Name :"<<getName()<<endl;
    cout<<"Specialist :"<<getSpecialist()<<endl;
    cout<<"Lisence Number :"<<getMedicalLisence()<<endl;
}