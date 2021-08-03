

#include"Clinic.h"



//DateTime class test case

int main(){

    string patName;//Patients name
    long paID;//ID
    char gens;//GEN
    string cellNumber;//contact Number
    int old;//age


    string appointmenttime;

    Clinic c;
    Patient p;

    int choice;//switch case choice

    //Doctors information
    Doctor d1("Stefan Roger", "Medicine Specialist", "3000101");
    Doctor d2("Mickel Rashford", "Eye Specialist", "3000102");
    Doctor d3("Steven Gerrard", "Dentist", "3000103");
    Doctor d4("Edenson Cavani", "Skin Specialist", "3000104");
    Doctor d5("Harry Maguire", "Ear Specialist", "3000105");
    
    
    cout<<"\n\n*************Welcome to the Walk in Clinic*******************"<<endl;

    do{
        cout<<"\n"<<"********Information to be Filled***************"<<endl;
        cout<<"Patient Name :";
        cin>>patName;
        cout<<"Patient ID :";
        cin>>paID;
        cout<<"Patient Gender :";
        cin>>gens;
        cout<<"Patient Contact Number :";
        cin>>cellNumber;
        cout<<"Patient Age :";
        cin>>old;
        
        //Printing out the Doctors Name with their speciality
        cout<<"\n\tSelect one option below ";
        cout<<"\n\t1 "<<d1.getName()<<" : "<<d1.getSpecialist();
        cout<<"\n\t2 "<<d2.getName()<<" : "<<d2.getSpecialist();
        cout<<"\n\t3 "<<d3.getName()<<" : "<<d3.getSpecialist();
        cout<<"\n\t4 "<<d4.getName()<<" : "<<d4.getSpecialist();
        cout<<"\n\t5 "<<d5.getName()<<" : "<<d5.getSpecialist();
        cout<<"\n\t6 Exit"<<endl;;

        

        cout<<"\nchoice :";
        cin>>choice;
        cout<<endl;

        switch(choice){
            case 1:
                cout<<"select appointment time betweem 9 AM to 5 PM"<<endl;
                cout<<"The appointments are in an interval of 30 mins from 9 AM"<<endl;
                cout<<"\nAppointment Time :";
                cin>>appointmenttime;

                cout<<endl;
                
                c.setAppointmentTime(appointmenttime);
                p=c.addPatientToMed(patName, paID, gens, cellNumber, old);
                
                cout<<p;
             

                break;
                
            case 2:
                cout<<"select appointment time betweem 9 AM to 5 PM"<<endl;
                cout<<"The appointments are in an interval of 30 mins from 9 AM"<<endl;
                cout<<"\nAppointment Time :";
                cin>>appointmenttime;

                cout<<endl;

                c.setAppointmentTime(appointmenttime);

                //setting appointment for the patients
                p=c.addPatientToEye(patName, paID, gens, cellNumber, old);
                
                cout<<p;

                break; 
               
            case 3:
                cout<<"select appointment time betweem 9 AM to 5 PM"<<endl;
                cout<<"The appointments are in an interval of 30 mins from 9 AM"<<endl;
                cout<<"\nAppointment Time :";
                cin>>appointmenttime;

                cout<<endl;

                c.setAppointmentTime(appointmenttime);

                //setting appointment for the patients
                p=c.addPatientToDentist(patName, paID, gens, cellNumber, old);
                
                cout<<p;

                break; 
              
            case 4:
                cout<<"select appointment time betweem 9 AM to 5 PM"<<endl;
                cout<<"The appointments are in an interval of 30 mins from 9 AM"<<endl;
                cout<<"\nAppointment Time :"; 
                cin>>appointmenttime;

                cout<<endl;
               // cout<<"9 AM, 9:30 AM, 10 AM, 10:30 AM, 11 PM, 11:30 PM, 12:00 PM, 12:30 PM"<<endl;
                //cout<<"1 PM, 1:30 PM, 2:00 PM, 2:30 PM, 3:00PM, 4:00 PM, 4:30 PM, 5:00 PM"<<endl; 
                
                c.setAppointmentTime(appointmenttime);

                //setting appointment for the patients
                p=c.addPatientToSkin(patName, paID, gens, cellNumber, old);
                
                cout<<p;

                break;

            case 5:
                cout<<"select appointment time betweem 9 AM to 5 PM"<<endl;
                cout<<"The appointments are in an interval of 30 mins from 9 AM"<<endl;
                cout<<"\nAppointment Time :"; 
                cin>>appointmenttime;

                cout<<endl;

                c.setAppointmentTime(appointmenttime);

                //setting appointment for the patients
                p=c.addPatientToEar(patName, paID, gens, cellNumber, old);
                
                cout<<p;

                break;

            case 6:
                break;
                exit(0);
            
            default:
                cout<<"\nEnter corret choice";
                //exit(0);


        }

        


    }while(choice!=6);

    return 0;
   
}

