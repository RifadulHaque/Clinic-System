#ifndef Doctor_H
#define Doctor_H

#include"Person.h"




class Doctor: public Person{
    protected:
        string specialist;
        string medicalLisence;
        //bool availability;       

    public:
        Doctor();
        Doctor(string n, string sList, string mL);

        //Setters and getters for information of the doctors
        void setSpecialist(string sList);
        string getSpecialist();
        void setMedicalLisence(string mL);
        string getMedicalLisence();
        void print();
       // void setAvailability(bool avail);
       // bool getAvailability();
        
};

#endif