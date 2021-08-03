#include"Patient.h"




Patient::Patient():Person(){
    //time=t;
}

Patient::Patient(string n,long pID, char gen, string conNumber,int age):Person(n){

    patientId=pID;
    Gender=gen;
    contactNumber=conNumber;
    Age=age;
    
    

}

void Patient:: setpatientID(long pID){
     patientId=pID;
}

long Patient:: getpatientID(){
    return patientId;
}


void Patient:: setGender(char gen){

        Gender=gen;

}

char Patient:: getGender(){
    return Gender;
}

void Patient:: setContactNumber(string conNumber){
    contactNumber=conNumber;
}

string Patient:: getContactNumber(){
    return contactNumber;
}

void Patient:: setAge(int age){
    Age=age;

}

int Patient :: getAge(){
    return Age;
}

/*

void Patient:: setAppointmentTime(Time t){
    
    time=t;
}

Time Patient:: getAppointmentTime(){
    return time;
}
*/


ostream &operator<<(ostream &out,Patient &p){
     out<<"Name :"<<p.getName()<<endl;
     out<<"PatientID :"<<p.getpatientID()<<endl;
     out<<"Gender :"<<p.getGender()<<endl;
     out<<"Age :"<<p.getAge()<<endl;
     out<<"Contact Number :"<<p.getContactNumber()<<endl;

     return out;
}

void Patient:: print(){
    cout<<"Name :"<<Name<<endl;
    cout<<"PatientID :"<<patientId<<endl;
    cout<<"Gender :"<<Gender<<endl;
    cout<<"Age :"<<Age<<endl;
    cout<<"Contact Number :"<<contactNumber<<endl;

    
}
