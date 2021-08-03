#include"Clinic.h"

Clinic::Clinic(){};

Clinic::Clinic(string atime){
    appointTime=atime;
}

void Clinic:: setAppointmentTime(string t){
    appointTime=t;
}

string Clinic:: getAppointmentTime(){
    return appointTime;
}

Patient Clinic:: addPatientToMed(string n,long pID, char gen, string conNumber,int age){
    
    Patient pmed(n, pID, gen ,conNumber, age );
    if(medSpe.count(appointTime)){
        
        cout<<"This time slot is full"<<endl;
        cout<<"Select Another appointment Time"<<endl;
        return pmed;

    }else{
        medSpe.insert(pair<string,Patient>(appointTime,pmed));
        cout<<"Appointment has been set at:"<<appointTime<<endl;
        cout<<"***Patient Information***"<<endl;
        return pmed;
    }

}


Patient Clinic:: addPatientToEye(string n,long pID, char gen, string conNumber,int age){

   Patient pmed(n, pID, gen ,conNumber, age );
    if(eyeSpe.count(appointTime)){
        
        cout<<"This time slot is full"<<endl;
        cout<<"Select Another appointment Time"<<endl;
        return pmed;

    }else{
        eyeSpe.insert(pair<string,Patient>(appointTime,pmed));
        cout<<"Appointment has been set at:"<<appointTime<<endl;
        cout<<"***Patient Information***"<<endl;
        return pmed;
    }



}


Patient Clinic:: addPatientToDentist(string n,long pID, char gen, string conNumber,int age){

   Patient pmed(n, pID, gen ,conNumber, age );
    if(den.count(appointTime)){
        
        cout<<"This time slot is full"<<endl;
        cout<<"Please select another appointment Time"<<endl;
        return pmed;

    }else{
        den.insert(pair<string,Patient>(appointTime,pmed));
        cout<<"Appointment has been set at:"<<appointTime<<endl;
        cout<<"***Patient Information***"<<endl;
        return pmed;
    }

}

Patient Clinic:: addPatientToSkin(string n,long pID, char gen, string conNumber,int age){

   Patient pmed(n, pID, gen ,conNumber, age );
    if(skinSpe.count(appointTime)){

        cout<<"This time slot is full"<<endl;
        cout<<"Select Another appointment Time"<<endl;
        return pmed;

    }else{
        skinSpe.insert(pair<string,Patient>(appointTime,pmed));
        cout<<"Appointment has been set at:"<<appointTime<<endl;
        cout<<"***Patient Information***"<<endl;
        return pmed;
    }

}

Patient Clinic:: addPatientToEar(string n,long pID, char gen, string conNumber,int age){

   Patient pmed(n, pID, gen ,conNumber, age );
    if(earSpe.count(appointTime)){
        
        cout<<"This time slot is full"<<endl;    
        cout<<"Select Another appointment Time"<<endl;
        return pmed;

    }else{
        earSpe.insert(pair<string,Patient>(appointTime,pmed));
        cout<<"Appointment has been set at:"<<appointTime<<endl;
        cout<<"***Patient Information***"<<endl;
        return pmed;
    }

}

