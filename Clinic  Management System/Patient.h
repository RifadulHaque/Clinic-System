#ifndef PATIENT_H
#define PATIENT_H


#include"Person.h"
//#include"Time.h"

class Patient : public Person{

    protected:
        long patientId;
        char Gender;
        string contactNumber;
        int Age;
        //Time time;

    public:
        Patient();
        Patient(string n,long pID, char gen, string conNumber,int age);

        //All setters and getter for Patient information
        void setpatientID(long pID);
        long getpatientID();
       
        void setGender(char gen);
        char getGender();
        void setContactNumber(string conNumber);
        string getContactNumber();
        void setAge(int age);
        int getAge();

        //<< operator has been overloaded to print objects of Patient
        friend ostream &operator<<(ostream &out,Patient &p);
        
        void print();

};

        

#endif
