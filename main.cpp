#include<iostream>
#include<stdio.h>
#include<string>
#include "patient.h"
#include "info.h"
#include "doctor.h"

using namespace std;

int main()
{

    int option;
    char ch='n';

	cout<<"\n\n\t\t<<********HOSPITAL MANAGMENT SYSTEM**********>>\n\n";
	cout<<"\t\t<<<<<PRESS  ANY KEY TO CONTINUE>>>>>\n\n";
    cin>>ch;
    cout<<"\n<-------------------------------------------------------------------------------------->\n\n";
	cout<<"\t\t\t<<********************<<<WELCOME TO MAIN MENU>>>************************>>\n";
	cout<<"\n\n**********************ENTER YOUR OPTION TO CONTINUE*************************\n\n";


        do
        {
            cout<<"\n\t1 ----> PRESS 1 INFORMATION ABOUT DOCTORS AND PATIENTS.\n";
            cout<<"\t2 ----> PRESS 2 TO PROCEED TO  FOR FIRST VISIT MENU.\n";
            cout<<"\t3 ----> PRESS 3 TO PROCEED TO PATIENT MENU.\n";
            cout<<"\t4 ----> PRESS 4 TO PROCEED TO DOCTOR MENU.\n";
            cout<<"\t5 ----> PRESS 5 TO Accounts \n";
            cout<<"\t6 ----> PRESS 0 TO Exit.\n";
            cin>>option;

            switch(option)
            {
                case  1:
				{
                    info1.info();
                    break;
				}
                case 2:
                {
                    info1.first_visit();
					break;
				}
                case  3:
				{
                    p1.patient_menu();
                    break;
				}
                case  4:
				{
					d1.doctor_menu();
			    break;
				}
                case  5:
				{
                    ac1.total();
                    break;
				}
		}
}
		while(option!= 0);
		return 0;
}
