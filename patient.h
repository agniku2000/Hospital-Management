#ifndef PATIENT_H
#define PATIENT_H
#include<string>
using namespace std;

//Class for patients details
class patient
{
	protected:
		int Admit_CHARGES=1500;
          	string patient_name;
                string address;
       		int age;
	        string sex,admit_ward;
	        int opt1;
		int ward_no;
		int bed_no;
		int no_of_days_admitted;
        	int charge_per_day;
		string blood_group;
		string checkup_type ;
        	int fee;
	public:
		void patient_menu();
        	void admit_patient();
        	void show_admit_patients();

}p1;

//Defining class methods
void patient::patient_menu()
{
    {

            cout<<"***************************** WELCOME TO PATIENT MENU ***************************\n\n";
            cout<<"************************** ENTER YOUR OPTIONAL NUMBER TO PROCEED *************************\n\n";
            cout<<"----> PRESS 1 TO ADMIT PATIENT.\n\n";
            cout<<"----> PRESS 2 TO VIEW LIST OF ADMIT PATIENTS.\n\n";
            cout<<"----> PRESS 3 TO GOTO MAIN MAIN MENU.\n\n";
            cin>>opt1;

            switch(opt1)
            {
                case 1:
                {
                    admit_patient();
                    break;
                }

                case 2:
                {
                    show_admit_patients();
                    break;
                }
                case 3:
                {
                    patient_list();
                    break;
                }
            }
	}
}

void patient::admit_patient()
{

    cout<<"\n -------------------------------";
    cout<<"\n Enter Patient Details";
    cout<<"\n -------------------------------";
    cout<<"\n enter patient name :\n \t\t\t";
    cin>> patient_name;
    cout<<"\n enter patient address :\n \t\t\t";
    cin>>address;
    cout<<"\n enter patient age :\n \t\t\t";
    cin>>age;
    cout<<"\n enter patient sex :\n \t\t\t";
    cin>>sex;
    cout<<"\n name the admit ward :\n \t\t\t ";
    cin>>admit_ward;
    cout<<"\n Enter  ward number :\n \t\t\t";
    cin>>ward_no;
    cout<<"\n Enter  bed number :\n \t\t\t";
    cin>>bed_no;
    cout<<"\n number of days Patient admitted  :\n \t\t\t";
    cin>>no_of_days_admitted;
    cout<<"\n patient blood group   :\n \t\t\t";
    cin>>blood_group;
    cout<<"\n Patient case type :\n \t\t\t";
    cin>>checkup_type;
    cout<<"\n enter doctor charges ";
    cin>>fee;

}

void patient::show_admit_patients()
{
	cout<<"\n -------------------------------";
        cout<<"\n Displaying Patient Details";
        cout<<"\n -------------------------------";
        cout<<"\n Patient name :\n \t\t\t";
        cout<<patient_name;
        cout<<"\n patient address :\n \t\t\t";
        cout<<address;
        cout<<"\n Patient age :\n \t\t\t";
        cout<<age;
        cout<<"\n Patient sex :\n \t\t\t";
        cout<<sex;
        cout<<"\n name of  admit ward :\n \t\t\t";
        cout<<admit_ward;
	cout<<"\n Patient ward number :\n \t\t\t";
	cout<<ward_no;
	cout<<"\n Patient bed number :\n \t\t\t";
	cout<<bed_no;
	cout<<"\n number of days Patient admitted  :\n \t\t\t";
	cout<<no_of_days_admitted;
	cout<<"\n Patient charged per day :\n \t\t\t";
	cout<<charge_per_day;
	cout<<"\n blood_group :\n \t\t\t";
	cout<<blood_group;
	cout<<"\n checkup_type :\n \t\t\t";
	cout<<checkup_type;
}

//FOR ACCOUNTS
class accounts:public patient
{
    protected:
        int Admit_CHARGES=1000;
        int Discharge_fee=1000;
        int che;
        int tl;

    public:
        void total()
        {
            patient:: admit_patient();
            cout<<"\nselect 1. OPD CARDIALOGIST  specialist \nselect 2. GYNACOLOGIST \nselect 3. ENE( EAR NOSE EYE SPECIALIST ) \nselect 4. NEUROSERGONS (BRAIN) \nselect 5. NEPHRALOGISTS (KIDNEY SPECIALIST)\n";
            cin>>che;
            switch (che)
            {
                case 1:
                {
                    int doctor_charges =3000;
                    tl=doctor_charges+Admit_CHARGES+Discharge_fee + no_of_days_admitted*charge_per_day;
                    cout<<"your grand total is ="<<tl;
                    break;
                }

                case 2:
                {
                    int doctor_charges=2000;
                    tl=doctor_charges+Admit_CHARGES+Discharge_fee + no_of_days_admitted*charge_per_day;
                    cout<<"your grand total is ="<<tl;
                    break;
                }

		 case 3:
		{
                    int doctor_charges = 4000;
                    tl=doctor_charges+Admit_CHARGES+Discharge_fee + no_of_days_admitted*charge_per_day;
                    cout<<"your grand total is ="<<tl;
                    break;
                }

		case 4:
		{
                    int doctor_charges = 2500;
                    tl=doctor_charges+Admit_CHARGES+Discharge_fee + no_of_days_admitted*charge_per_day;
                    cout<<"your grand total is ="<<tl;
                    break;
               }

                case 5 :
	       {
                  int doctor_charges =1800;
                  tl=doctor_charges+Admit_CHARGES+Discharge_fee + no_of_days_admitted*charge_per_day;
                  cout<<"your grand total is ="<<tl;
                  break;
               }
	}

 }
 }ac1;

#endif
