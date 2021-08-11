// TOOL PLAZA SOFTWARE (PROJECT C++).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<iostream>//
#include<conio.h>
#include<ctime>
#include<fstream>
#include<string>
#include<windows.h>

#pragma warning(disable : 4996)



using namespace std;

void MASTERFUNCTION()
{
	int	special=0;	
	string name;
	cout<<"\n\t\t\t\t\t\t\a--------------------------";
	cout<<"\n\t\t\t\t\t\tENTER YOUR NAME:";
	cin>>name;
	cout<<"\t\t\t\t\t\t--------------------------";
	cout<<endl;
	int bus,car,truck,trailer,wagon;
	car=30,wagon=50,bus=100,truck=120,trailer=250;
	
	time_t curr_time;
	curr_time = time(NULL);
	char *tm = ctime(&curr_time);
	cout<<"\a\a\a\t\t\t\t\t\t\t\t\t  |-------------------|\t\t\t-----------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t  |TOLL PLAZA SOFTWARE|\t\t\t"<<"DATE/TIME: "<<tm;
	cout<<"\t\t\t\t\t\t\t\t\t  |-------------------|\t\t\t-----------------------------------\n\n";


	//FOR MENU
	cout<<"\t\t\t\t\t\t|-----------------------|-----------------------|-----------------------|\n";
	cout<<"\t\t\t\t\t\t|SERIAL NUMBER\t"<<"\t|VEHICLE Ctg.\t\t|"<<"TAX/-\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t|-----------------------|-----------------------|-----------------------|\n";
	cout<<"\t\t\t\t\t\t|1.           \t"<<"\t|CAR         \t\t|"<<car<<"\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t|2.           \t"<<"\t|WAGON       \t\t|"<<wagon<<"\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t|3.           \t"<<"\t|BUS         \t\t|"<<bus<<"\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t|4.           \t"<<"\t|TRUCK       \t\t|"<<truck<<"\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t|5.           \t"<<"\t|TRAILER     \t\t|"<<trailer<<"\t\t\t|"<<endl;
	cout<<"\t\t\t\t\t\t|-----------------------|-----------------------|-----------------------|";
	cout<<"\n\n\t\t\t\t\t\t          |--------------|-|\t |------------------|----------|\n";
	cout<<"\t\t\t\t\t\t          |FOR EXIT PRESS|0|\t |FOR CONTINUE PRESS|(spacebar)|";
	cout<<"\n\t\t\t\t\t\t          |--------------|-|\t |------------------|----------|\n";
	char i,b;
	i=_getch();
	if(i=='0')
	{exit(0);}
	int d=1;
	int f=0;
	//FOR SELECTION
	int g=0;
	do
{   cout<<"ooooooooooooooooooooooo\n";
	cout<<"|<ENTER SERIAL NUMBER>|\n";
	char a;
	a=getch();
	cout<<"ooooooooooooooooooooooo\n";
	int R,C;
	
	
	switch(a)
	{
	case '1':
		{
			cout<<"|---|\n";
			cout<<"|CAR|\n";
			cout<<"|---|\n";
			cout<<"\t......................................\n";
		    cout<<"\tRECIEVED:";
			cin>>R;
			C=R-car;
			cout<<"     \tCHANGE:"<<C;
			break;
		}
	case '2':
		{
			
			cout<<"|-----|\n";
			cout<<"|WAGON|\n";
			cout<<"|-----|\n";
			cout<<"\t......................................\n";
		    cout<<"\tRECIEVED:";
			cin>>R;
			C=R-wagon;
			cout<<"     \tCHANGE:"<<C;
			break;
		}
	case '3':
		{
			cout<<"|---|\n";
			cout<<"|BUS|\n";
			cout<<"|---|\n";
			cout<<"\t......................................\n";
		    cout<<"\tRECIEVED:";
			cin>>R;
			C=R-bus;
			cout<<"     \tCHANGE:"<<C;
			break;
		}
	case '4':
		{
			
			cout<<"|-----|\n";
			cout<<"|TRUCK|\n";
			cout<<"|-----|\n";
			cout<<"\t......................................\n";
		    cout<<"\tRECIEVED:";
			cin>>R;
			C=R-truck;
			cout<<"     \tCHANGE:"<<C;
			break;
		}
	case '5':
		{
			cout<<"|-------|\n";
			cout<<"|TRAILER|\n";
			cout<<"|-------|\n";
			cout<<"\t......................................\n";
		    cout<<"\tRECIEVED:";
			cin>>R;
			C=R-trailer;
			cout<<"     \tCHANGE:"<<C;
			break;
		}
	default:
		{
			cout<<"\n\n-------------------------------\n";
			cout<<"****<INVALID SERIAL NUMBER>****\n";
			cout<<"-------------------------------\n";
			d--;
			break;
		}
	}
//FOR BILL



	if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5')
{cout<<"\tFOR RECEIPT PRESS :: 1 \n";
	b=_getch();}

if(b=='1')
{
fstream recipt;

recipt.open("RECIPT.txt",ios::out|ios::trunc);
recipt<<"\t\t\t     ___________________\n";
recipt<<"\t\t\t    -TOLL PLAZA SOFTWARE-\t\t\t"<<endl;
recipt<<"\t\t\t     '''''''''''''''''''\n"<<endl;
recipt<<"\t\t          Islamabad Toll Plaza (M-1)\t\t\t\n";
recipt<<"\t  Lahore-Islamabad Motorway, Islamabad, Rawalpindi,Punjab\t\t\n";
recipt<<"\t\t   (Contact No. 03412367849,0333124573)\n\n";
recipt<<"\t\t___________________________________________\n";
recipt<<"\t\tRecipt No. "<<d<<"\n";
recipt<<"\t\t___________________________________________\n";
if(a=='1')
{
recipt<<"\t\tCategory: CAR\n";
recipt<<"\t\t___________________________________________\n";
recipt<<"\t\tToll TAX: "<<car<<"\n";}
if(a=='2')
{
recipt<<"\t\tCategory: WAGON\n";
recipt<<"\t\t___________________________________________\n";
recipt<<"\t\tToll TAX: "<<wagon<<"\n";
}
if(a=='3')
{recipt<<"\t\tCategory: BUS\n";
recipt<<"\t\t___________________________________________\n";
recipt<<"\t\tToll TAX: "<<bus<<"\n";
}
if(a=='4')
{recipt<<"\t\tCategory: TRUCK\n";
recipt<<"\t\t___________________________________________\n";
recipt<<"\t\tToll TAX: "<<truck<<"\n";
}
if(a=='5')
{recipt<<"\t\tCategory: TRAILER\n";
recipt<<"\t\t___________________________________________\n";
recipt<<"\t\tToll TAX: "<<trailer<<"\n";
}
recipt<<"\t\t___________________________________________\n";
recipt<<"\t\tRECIEVED: "<<R<<"\n";
recipt<<"\t\t___________________________________________\n";
recipt<<"\t\tCHANGE  : "<<C<<"\n";
recipt<<"\t\t___________________________________________\n";
recipt<<"\t\tDate/Time: "<<tm<<"\n";

recipt<<"\t\t\t    ___________________\n";
recipt<<"\t\t\t    |Developed By: NMR|\n";
recipt<<"\t\t\t    |-----------------| \n";

recipt.close();
    string r="RECIPT";
    r = "notepad \"" + r + "\"";

    system(r.c_str());

}
d++;
g++;
if(f==0)
{
fstream TSrecord;
TSrecord.open("TOTALSALESRECORD.txt",ios::out|ios::in|ios::app);
TSrecord<<"\n\t\t\t\t\t\t\t\t\t  |<<"<<__DATE__<<">>|\t\t"<<"\tSALESMAN:"<<name;
TSrecord<<"\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
TSrecord<<"  RECIPT ID\t\t\t\tCustomer\t\t\t\tRecipt Total\t\t\t\tDate/Time\n"; 
TSrecord<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
TSrecord.close();
}
fstream TSrecord;//TOTAL SALES RECORD
TSrecord.open("TOTALSALESRECORD.txt",ios::app|ios::out);
if(a=='1')
{
	TSrecord<<"  "<<g<<"\t\t\t\t\tCounter\t\t\t\t\t"<<"30"<<"\t\t\t\t\t"<<tm;}

if(a=='2')
{
	TSrecord<<"  "<<g<<"\t\t\t\t\tCounter\t\t\t\t\t"<<"50"<<"\t\t\t\t\t"<<tm;}

if(a=='3')
{
	TSrecord<<"  "<<g<<"\t\t\t\t\tCounter\t\t\t\t\t"<<"100"<<"\t\t\t\t\t"<<tm;}

if(a=='4')
{
	TSrecord<<"  "<<g<<"\t\t\t\t\tCounter\t\t\t\t\t"<<"120"<<"\t\t\t\t\t"<<tm;}
if(a=='5')
{
	TSrecord<<"  "<<g<<"\t\t\t\t\tCounter\t\t\t\t\t"<<"250"<<"\t\t\t\t\t"<<tm;}


TSrecord<<"=======================================================================================================================================================================\n";


TSrecord.close();
if(special==0)
{
	cout<<"\t\t\t\t             \t|-----------------------------------|  \t|----------------------------|\n";
	cout<<"\t\t\t\t             \t|<<FOR STOPPING RECIPT PROCESS>>|->0|  \t|<<FOR Continue>>->(spacebar)| \n";
	cout<<"\t\t\t\t             \t|-----------------------------------|  \t|----------------------------|\n\n";
}
	cout<<"\n";
	special++;
	char i;
	i=_getch();
	
	if(i=='0')
	{
		fstream TSrecord;//PER DAY ENDING VISUAL
		TSrecord.open("TOTALSALESRECORD.txt",ios::out|ios::app);
		TSrecord<<"********************************************************************************EXITED*********************************************************************************\n";
		TSrecord.close();
	}
	if(i=='0'){break;}
	if(i!='0')
	{f++;}
	

}while(i!=0);

cout<<"\t\t\t\t\t\t\t\tNMR|<<For Total Sales View Press -> T>>|NMR \n";
cout<<"\t\t\t\t\t\t\t\t   |<<For Removal Of Old Record  -> E>>|\n\n";
char t;
t=_getch();
if(t=='e'||t=='E')
{
	fstream TSrecord;
	TSrecord.open("TOTALSALESRECORD.txt",ios::trunc);
		TSrecord.close();
	string r="TOTALSALESRECORD";
    r = "notepad \"" + r + "\"";

    system(r.c_str());
}
if(t=='t'||t=='T')
{
	string r="TOTALSALESRECORD";
    r = "notepad \"" + r + "\"";

    system(r.c_str());
	cout<<"\a\a\a\t\t\t\t\t\t\t\t\t  |-------------------|\n";
	cout<<"\t\t\t\t\t\t\t\t\t  |Developed BY: NMR  |\n";
	cout<<"\a\a\a\t\t\t\t\t\t\t\t\t  |-------------------|\n";

}



if(t=='0')
{exit(0);}

}
void MaximizeOutputWindow(void)
{
    HWND consoleWindow = GetConsoleWindow(); // This gets the value Windows uses to identify your output window 
    ShowWindow(consoleWindow, SW_MAXIMIZE); // this mimics clicking on its' maximize button
}

int main()

{   system("pause");
	MaximizeOutputWindow();
	system ("color f0");
	int c=1;
	do
	{
	if(c==0)
	{system("CLS");
	cout<<"***>|ENTER AGAIN OR CREATE A NEW ACCOUNT|<***\n";
	}
	cout<<"|=================================|\n";
	cout<<"=<<CREATE OR LOGIN ADMIN ACCOUNT>>=\n";
	cout<<"|=================================|\n";
	char s;
	cout<<"--------------------------\n";
	cout<<"FOR CREATE NEW ACCOUNT : 1\n";
	cout<<"--------------------------\n";
	cout<<"IF YOU ALREADY HAVE    : 2\n";
	cout<<"--------------------------\n";
	s=_getch();
	
	
	
	if(s=='1')
	{
		string s_n,s_p;
		cout<<"\a________________________________\n";
		cout<<"|ENTER NEW USERNAME: ";
		cin>>s_n;
		cout<<"\a________________________________\n";
		cout<<"|ENTER NEW PASSWORD: ";
		cin>>s_p;
		
		
		fstream SECURITYSYSTEM;
		SECURITYSYSTEM.open("USERNAMEANDPASSWORD.txt",ios::out|ios::trunc);
		SECURITYSYSTEM<<s_n<<endl;
		SECURITYSYSTEM<<s_p;
		SECURITYSYSTEM.close();
		MASTERFUNCTION();
		break;
	}
	if(s=='2')
	{
		string salesman_name,salesman_password;
		string check_n,check_p;
	cout<<"\a...........................................\n";
	cout<<"ENTER YOUR LOGIN USER NAME:";
	cin>>salesman_name;
	cout<<"\a...........................................";
	cout<<"\nENTER YOUR LOGIN PASSWORD:";
	cin>>salesman_password;
	cout<<"...........................................";
	
	fstream SECURITYSYSTEM;
		SECURITYSYSTEM.open("USERNAMEANDPASSWORD.txt",ios::out|ios::in);
		SECURITYSYSTEM>>check_n;
		SECURITYSYSTEM>>check_p;
		SECURITYSYSTEM.close();
		if((salesman_name==check_n && salesman_password==check_p))
		{MASTERFUNCTION();}
		else{cout<<"\n\n<<\a***WRONG USER NAME OR PASSWORD***>> ";
		c=getch();
		c=0;
		}
		break;
	}
}
	while(c==0);
return 0;
}