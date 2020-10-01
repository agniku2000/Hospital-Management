#ifndef INFO_H
#define INFO_H
#include<string>
using namespace std;
class information
{
    private:
        int opt2,opt3,opt4,opt5,opt6;
        string name,address,blood_group,DOB;
        double mob_no,choice;

    public :
        void info();
        void first_visit();
        void select_doctor();

}info1;

void information::info()
{
    {
            cout<<"\n\t <Select  1 to know Hospital expenses>   \n\t <SELECT 2 to know the Doctors Information> \n ";
            cin>>opt2;
            switch(opt2)
            {
            case 1:
            {
                cout<<"\n $*******************************Hosptial expenses*******************************$";
                cout<<"\n PER DAY ROOM CHARGES 5000-RS \n PER DAY WARD CHARGES 1000-RS \n PER DAY ICU CHARGES 15000-RS \n PER DAY CCU CHARGES 10000-RS \n";
                cout<<"\n Admit CHARGES 100-RS  ";
                cout<<"\n Discharge fee 1000-RS";
			break;
            }
            case 2:
            {
                cout<<"\n\t1 ----> PRESS 1 for OPD CARDIALOGIST  specialist \n \t2 ----> PRESS 2 for GYNACOLOGIST \n\t3----> PRESS 3  for  ENE( EAR NOSE EYE SPECIALIST ) \n \t4----> PRESS 4 for NEUROSERGONS (BRAIN) \n\t5 ----> PRESS 5 for NEPHRALOGISTS (KIDNEY SPECIALIST)\n ";
                cin>>opt3;
                switch(opt3)
					 {
		   	        	case 1 :
                        {
                            cout<<"\n<**************************************************************************************>\n\n";
                            cout<<"\tTimings ---->MONDAY/TUESDAY/WEDNESDAY/THURSDAY/FRIDAY\n\t 8:00PM TO 10:00PM ";
                            cout<<"\t Dr. John "<<endl;
                            cout<<"\t visiting fee 3000-RS"<<endl;
                            cout<<"\n<**************************************************************************************>\n\n";
                            break;
                        }
					   	case 2 :
                        {
                            cout<<"\n<**************************************************************************************>\n\n";
                            cout<<"\tTimings ---->MONDAY/WEDNESDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n ";
                            cout<<"\tDr. J. Cole "<<endl;
                            cout<<"\t visiting fee 2000-RS"<<endl;
                            cout<<"\n<**************************************************************************************>\n\n";
		 	                break;
                        }
					   	case 3 :
                        {
		                    cout<<"\n<**************************************************************************************>\n\n";
		   					cout<<"\tTimings ---->MONDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n";
		   					cout<<"\tDr. Dre"<<endl;
			                cout<<"\tvisiting fee 1000-RS"<<endl;
			                cout<<"\n<**************************************************************************************>\n\n";
                            break;
                        }
					   	case 4 :
                        {
                            cout<<"\n<**************************************************************************************>\n\n";
                            cout<<"\tTimings ---->MONDAY/WEDNESDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n";
                            cout<<"\tDr. Kendrick Lamar "<<endl;
                            cout<<"\tvisiting fee 4000-RS"<<endl;
                            cout<<"\n<**************************************************************************************>\n\n";
                            break;
                        }
                        case 5 :
                        {
                            cout<<"\n<****************************************************************************************>\n\n";
                            cout<<"\tTimings ---->SATURDAY/TUESDAY/THURSAY\n\t 8:00PM TO 10:00PM\n";
                            cout<<"\tDr. Tupac Shakur  "<<endl;
                            cout<<"\tvisiting fee 2500-RS"<<endl;
                            cout<<"\n<*****************************************************************************************>\n\n";
                            break;
                        }
                    }
            }
	}
}
}

void information::first_visit()
{
{
	cout<<"\n <PRESS 1 FOR INFO> \n <PRESS 2 FOR SELECT DOCTOR> \n";
	cin>>opt5;
	switch(opt5)
	{
		case 1:
			{
                info();
                break;
			}
        case 2:
            {
				select_doctor();
				break;
			}

	}
}
}
void information::select_doctor()
{
    cout<<"\n\t1 ----> PRESS 1  for OPD CARDIALOGIST  specialist \n \t2 ----> PRESS 2 for GYNACOLOGIST \n\t3----> PRESS 3  for  ENE( EAR NOSE EYE SPECIALIST ) \n \t4----> PRESS 4 for NEUROSERGONS (BRAIN) \n\t5 ----> PRESS 5 for NEPHRALOGISTS (KIDNEY SPECIALIST)\n ";
    cin>>opt4;
    switch(opt4)
        {
            case 1 :
            {
                cout<<"\n<********************************************************************************************>\n";
                cout<<"\tTimings ---->MONDAY/TUESDAY/WEDNESDAY/THURSDAY/FRIDAY\n\t 8:00PM TO 10:00PM ";
                cout<<"\tDr. John "<<endl;
                cout<<"\t visiting fee 3000-RS"<<endl;
                cout<<"\t for appointment press 1 and 0 to leave "<<endl;
                cin>>opt6;

                switch(opt6)
                {
                    case 1:
                    {
                        cout<<"\nENTER YOUR NAME\n ";
                        cin>>name;
                        cout<<"\nENTER YOUR DOB \n ";
                        cin>>DOB;
                        cout<<"\nENTER YOUR ADDRESS \n ";
                        cin>>address;
                        cout<<"\nENTER YOUR mob no:\n ";
                        cin>>mob_no;
                        cout<<"ENTER YOU BLOOD GROUP";
                        cin>>blood_group;
                        break;
                    }
                }

                break;
            }
                    case 2 :
                        {
                            cout<<"\n<***********************************************************************>\n";
                            cout<<"\tTimings ---->MONDAY/WEDNESDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n ";
                            cout<<"\tDr, J. Cole"<<endl;
                            cout<<"\t visiting fee 2000-RS"<<endl;
                            cout<<"\t for appointment press 1 and 0 to leave "<<endl;
                            cin>>opt6;
                            switch(opt6)
                            {
                                case 1:{
			            		cout<<"\nENTER YOUR NAME\n ";
			            		cin>>name;
			            		cout<<"\nENTER YOUR DOB \n ";
			            		cin>>DOB;
			            		cout<<"\nENTER YOUR ADDRESS \n ";
			            		cin>>address;
			            		cout<<"\nENTER YOUR mob no:\n ";
			            		cin>>mob_no;
			            		cout<<"ENTER YOU BLOOD GROUP";
			            		cin>>blood_group;
								break;
							}
					   }
					   break;
					   }

					   	case 3 :
                        {
		                    cout<<"\n<***************************************************************************>\n";
		   					cout<<"\tTimings ---->MONDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n";
		   					cout<<"\tDr. Dre"<<endl;
			                cout<<"\tvisiting fee 1000-RS"<<endl;
			                 cout<<"\t for appointment press 1 and 0 to leave "<<endl;
                            cin>>opt6;
                        switch(opt6)
			            {
			            	case 1:{
			            		cout<<"\nENTER YOUR NAME\n ";
			            		cin>>name;
			            		cout<<"\nENTER YOUR DOB \n ";
			            		cin>>DOB;
			            		cout<<"\nENTER YOUR ADDRESS \n ";
			            		cin>>address;
			            		cout<<"\nENTER YOUR mob no:\n ";
			            		cin>>mob_no;
			            		cout<<"ENTER YOU BLOOD GROUP";
			            		cin>>blood_group;
								break;
							}
					   }
					   break;
                }
					   	case 4 :
                        {
                                cout<<"\n<*********************************************************************************>\n";
                                cout<<"\tTimings ---->MONDAY/WEDNESDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n";
                                cout<<"\tDr. Kendrick Lamar"<<endl;
                                cout<<"\tvisiting fee 4000-RS"<<endl;
                                cout<<"\t for appointment press 1 and 0 to leave "<<endl;
                                cin>>opt6;
			            switch(opt6)
			            {
			            	case 1:
			            	{
			            		cout<<"\nENTER YOUR NAME\n ";
			            		cin>>name;
			            		cout<<"\nENTER YOUR DOB \n ";
			            		cin>>DOB;
			            		cout<<"\nENTER YOUR ADDRESS \n ";
			            		cin>>address;
			            		cout<<"\nENTER YOUR mob no:\n ";
			            		cin>>mob_no;
			            		cout<<"ENTER YOU BLOOD GROUP";
			            		cin>>blood_group;
								break;
							}
					   }
					    break;
                        }
						case 5 :
                        {
                            cout<<"\n<*******************************************************************************************>\n";
                            cout<<"\tTimings ---->SATURDAY/TUESDAY/THURSAY\n\t 8:00PM TO 10:00PM\n";
                            cout<<"\tDr. Tupac Shakur  "<<endl;
                            cout<<"\tvisiting fee 2500-RS"<<endl;
                            cout<<"\t for appointment press 1 and 0 to leave "<<endl;
                            cin>>opt6;
                            switch(opt6)
			            {
			            	case 1:
			            	{
			            		cout<<"\nENTER YOUR NAME\n ";
			            		cin>>name;
			            		cout<<"\nENTER YOUR DOB \n ";
			            		cin>>DOB;
			            		cout<<"\nENTER YOUR ADDRESS \n ";
			            		cin>>address;
			            		cout<<"\nENTER YOUR mob no:\n ";
			            		cin>>mob_no;
			            		cout<<"ENTER YOU BLOOD GROUP";
			            		cin>>blood_group;
								break;
							}
				    }
					break;
					}
		}
}
#endif
