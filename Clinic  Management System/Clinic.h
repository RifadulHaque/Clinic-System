#include"Patient.h"
#include"Doctor.h"

#include<map>



class Clinic{

    protected:

        //maps are used so that on the same time 2 appoints are not set for each doctor
        map<string, Patient> medSpe;
        map<string, Patient> eyeSpe;
        map<string, Patient> den;
        map<string, Patient> skinSpe;
        map<string, Patient> earSpe;
        string appointTime;

    public:
        Clinic();
        Clinic(string atime);

        void setAppointmentTime(string t);
        string getAppointmentTime();
        
        //reusing the constructor from patient class
        //Addating patients to the map of doctor
        Patient addPatientToMed(string n,long pID, char gen, string conNumber,int age);
        Patient addPatientToEye(string n,long pID, char gen, string conNumber,int age);
        Patient addPatientToDentist(string n,long pID, char gen, string conNumber,int age);
        Patient addPatientToSkin(string n,long pID, char gen, string conNumber,int age);
        Patient addPatientToEar(string n,long pID, char gen, string conNumber,int age);

};