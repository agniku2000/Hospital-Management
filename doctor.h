#ifndef DOCTOR_H
#define DOCTOR_H
#include<string>

using namespace std;

class doctor
{
	protected:
		string doc_name;
		string doc_type;
		string address;
		string email;
		int choice1;
		public:
			void doctor_menu()
			{
			cout<<"\n <<<<<<------MENU FOR DOCTOR------>>>>>> \n";
			cout<<"\n ENTER 1 TO ENTER DOCTOR DETIAL \n";
			cout<<"\n ENTER 2 TO DIPLAY DOCTOR \n";
			cin>>choice1;
			switch(choice1)
			{
				case 1 :
					{
                        cout<<"\n <Enter doctor's name>  \n";
                        cin>> doc_name;
                        cout<<"\n <Enter doctor's proffessional type>  \n";
                        cin>>doc_type;
                        cout<<"\n <Enter doctor's address>\n ";
                        cin>>address;
                        cout<<"\n <Enter doctor's email-address>\n ";
                        cin>>email;
						break;
					}
					case 2:
					{

                        cout<<"\nDoctor name is\n "<<doc_name;
                        cout<<"\nProfessional type is\n  "<<doc_type;
                        cout<<"\nDoc address is\n "<<address;
                        cout<<"\nEmail of the doctor is\n  "<< email ;

						break;
					}
			}
}

}d1;

#endif
