#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
#include<fstream>
#include<stdio.h>
using namespace std;
int x;
/////////////////////////////////////////////////////////
class customer //class customer for login or signup
{
protected:
string firstname,lastname,username,username1;
string password,password1,password3,address,email;
int confirmation;
bool cinfail;
char ch1,ch;
int choice;
public:
void writetofile(string name)
{
	ofstream writefile;
	string file = username+".txt";
	writefile.open(file.c_str());    
	writefile << password;    
	writefile.close();  
}
void login()
{ cout<<"\n\n\t\t\t****************"<<endl;
  cout<<"\t\t\t    L O G I N"<<endl;
  cout<<"\t\t\t****************"<<endl<<endl;
	cout<<"Enter Your Username: ";
	cin>>username1;
	if(username==username1)
	{
		cout<<cout<<"Enter Your Password: ";
	cin>>password3;
	if(password==password3){
		cout << "You are being logged in!\n\n";
		system("PAUSE");
		system("CLS");
		return;
	}
	else
		cout<<"INVALID PASSWORD"<<endl;
	system("PAUSE");
	system("CLS");
	mainmenu();
	return;
	system("CLS");
	}
	else
		cout<<"INVALID PLEASE REGISTER YOURSELF FIRST!"<<endl;
	getch();
	system("CLS");
	mainmenu(); 
}
void registerpassword()
{   
	cout << "Please Enter the Password: ";  
	cin >> password;  
	if(password.length() < 4)
	{
		cout<<"PASSWORD LENGTH TOO SHORT, TRY AGAIN!"<<endl;
		registerpassword();
	}
	else
		p:cout << "Please Re-Enter your Password: ";   
	cin >> password1;   
	if (password == password1)
{ 
	cout<<"\n\nACCOUNT SUCCESSFULLY CREATED!!\n\nPress Enter to continue.."<<endl;
	writetofile(username);
	getch();
	system("CLS");
	return;
}  
	else
	{	cout << "Sorry password don't match, try again!" << endl;        
	goto p; }
}
void registerme()
{   cout<<"\n\n\t\t\t****************"<<endl;
	cout<<"\t\t\t   S I G N U P"<<endl;
	cout<<"\t\t\t****************"<<endl<<endl;
	cout<<"\t   ENTER THE FOLLOWING INFORMATION TO SIGNUP"<<endl<<endl;
u:cout << "Please Enter Your Username: \n"; 
	getline(cin, username); 
	cout << "\nUsername: "<< username << "\nConfirm? \n[1] Yes\n[2] No" << endl;  
	cin >> confirmation; 
	if (confirmation == 1)
{
	registerpassword();
	return;
}   
else
	{cout << "Sorry invalid input, Please try again" << endl;              
	goto u; }
	system("CLS");
}
void leave()
{
	exit(0);
}

void mainmenu()
{   cout<<"\n\n"<<setw(70)<<"----------------------------------------------------------------"<<endl;
	cout<<setw(50)<<"\tF O O D P A N D A   2.0  BY  IBRAHIM(CT-061)  &  TAHA(CT-043)"<<endl;
	cout<<setw(70)<<"----------------------------------------------------------------"<<endl;
	cout<<"\n\n\t\t\t* PRESS 1 TO LOG IN\n\n\t\t\t* PRESS 2 TO SIGN UP\n\n\t\t\t* PRESS 3 TO EXIT\n\n";
	cout<<"ENTER YOUR CHOICE: ";
	cin>>choice;
	system("CLS");
do
{    
	cinfail = cin.fail();
    cin.clear();   
	cin.ignore(10000,'\n');    }
	while(cinfail == true);
{        
	switch(choice)
{          
	case 1:login();
	break;            
	case 2:registerme();                
	break;            
	case 3: leave();
	}}}
void information()
{
	string s;
	int pin;
	cout<<"\t\t\tENTER YOUR BILLING INFORMATION\n\n\n"<<endl;
	info:cout<<"FIRST NAME:\t";
	cin>>firstname;
	cout<<endl;
	cout<<"LAST NAME:\t";
	cin>>lastname;
	cout<<endl;
	cout<<"ADDRESS :\t";
	cin>>address;
	getline(cin,address,'\n');
	cout<<"PRESS T FOR TAKEAWAY \nPRESS D FOR HOMEDELIVERY (we provide free home delivery)\t";
	cin>>ch;
	cout<<endl;
	cout<<"ENTER YOUR PAYMENT METHOD :\n PRESS C FOR CASH\n PRESS D FOR CREDIT CARD\t";
	cin>>ch;
	if(ch=='d'||ch=='D')
	{
		cout<<"\n\nENTER CREDIT CARD NUMBER\n";
		cin>>s;
		cout<<"\nENTER PIN\n";
		while(pin= getch())
		{
		if(pin=='\r')
		break;
		else
		cout<<"*";		
		}
	}
	cout<<endl;
	cout<<"YOUR ORDER IS CONFIRMED IT WILL BE DELIVERED IN 60 MINS!"<<endl;
}
};
////////////////////////////////////////////////////////////////////////////////////////////
class feedback
{   string comment;
	int a;
public:
	void comm()
	{cout<<"Please give us the Feedback: ";
	cin>>comment;
	getline(cin,comment,'\n');
	cout<<endl;
	rate:cout<<"RATE US (out of 5): ";
	cin>>a;
	if(a>5)
	{
		cout<<"INVALID"<<endl;
		goto rate;
	}
	else
	cout<<endl<<endl;
	cout<<setw(50)<<"**THANKYOU FOR YOUR FEEDBACK!**\n";
	system("PAUSE");
	return;
	}};//feedback
//////////////////////////////////////////////////////////////////////////////////////
class menu
{  
protected:
	int cost;
	int price;
	int ch;
	int d,s;
	char chh;
public:
	void display()
	{cout<<"\n\n\t\t\tSelect your Desired Restaurant: "<<endl<<endl;
		cout<<"\t\t\t1.KFC\n\n\t\t\t2.CHOPSOY\n\n";
		cout<<"SELECT YOUR CHOICE:\t";
		cin>>x;
		system("CLS");}
	void desserts()
              { cout<<"\n\n\t\t\t==============="<<endl;
				cout<<"\t\t\t D E S S E R T"<<endl;
				cout<<"\t\t\t==============="<<endl;
				cout<<"1. Turtofo Rs.200/-\n";
				cout<<"2. Mango panna cotta Rs.450/-\n";
				cout<<"3. Cream Caramel Rs.350/-\n";
				cout<<"4. Profiteroles Rs.500/-\n\n";
				cout<<"SELECT YOUR CHOICE: \t";
				cin>>d;
				cout<<endl;
				if (d==1)
			    {   price=200;
					cost+=price;  }
			    else if (d==2)
			    {   price=450;
				    cost+=price;  }
			    else if (d==3)
			    {   price=350;
				    cost+=price;  }
			    else if (d==4)
			    {   price=500;
				    cost+=price;  }  }//desserts

	void drinks()
	          { cout<<"\n\n\t\t\t======================="<<endl;
				cout<<"\t\t\t S O F T  D R I N K S"<<endl;
				cout<<"\t\t\t======================="<<endl;
				cout<<"1. Soft Drink Rs.150/-\n";
				cout<<"2. Mojito Rs.500/-\n";
				cout<<"3. Passion Twist Rs.600/-\n";
				cout<<"4. Mineral Water(s) Rs.50/-\n\n";
				cout<<"SELECT YOUR CHOICE: \t";
				cin>>ch;
				cout<<endl;
				if (s==1)
			    {   price=150;
					cost+=price;  }
			    else if (s==2)
			    {   price=500;
		            cost+=price;  }
			    else if (s==3)
			    {   price=600;
				    cost+=price;  }
			    else if (s==4)
			    {   price=50;
				    cost+=price;  }  }//drinks
}; //class menu
////////////////////////////////////////////////////////////
	class Kfc :public menu
	{ public:
	   Kfc()	
	     {  cost=0;
			cout<<"\n\n\t\t\t   W E L C O M E  T O  K F C  "<<endl;
			cout<<"\t\t\t*********************************"<<endl;
			k:cout<<"Choose Menu Type: "<<endl
				<<"1.A for DEALS\n2.B for BURGERS\n3.C for SIDEITEMS\n4.D for DESSERT\n5.E for SOFT DRINKS"<<endl;
				chh=getch();
			system("CLS");
			if (chh=='A'||chh=='a')
			{ 
				cout<<"\n\n\t\t\t============="<<endl;
				cout<<"\t\t\t D E A L S"<<endl;
				cout<<"\t\t\t============="<<endl;
			cout<<"1. Deal 1: Value Burger + drink for Rs-/ 300"<<endl;
			cout<<"2. Deal 2: Value Burger + fries for Rs-/ 250"<<endl;
			cout<<"3. Deal 3: Zinger Burger + fries + Drinks for Rs-/ 500"<<endl;
			cout<<"4. Deal 4: Sweet chilli Burger + fries for Rs-/ 450"<<endl;
			cout<<"5. Deal 5: Lava zinger Burger + soft drink for Rs-/ 375"<<endl;
			cout<<"6. Deal 6: Zinger classic Burger + fries +Dinner roll + softdrink for Rs-/ 800"<<endl;
			cout<<"7. Deal 7: Mighty zinger Burger + fries + soft drink for Rs-/ 650"<<endl;
			cout<<"ENTER YOUR CHOICE!\t";
			cin>>ch;
			cout<<endl;
			if (ch==1)
			{
					price=300;
					cost+=price;
			}
			else if (ch==2)
			{
				price=250;
				cost+=price;
			}
			else if (ch==3)
			{
				price=500;
				cost+=price;
			}
			else if (ch==4)
			{
				price=450;
				cost+=price;
			}
			else if (ch==5)
			{
				price=375;
				cost+=price;
			}
			else if (ch==6)
			{
				price=800;
				cost+=price;
			}
			else if (ch==7)
			{
				price=600;
				cost+=price;
			}}
			/***************************************************/
			if (chh=='B'||chh=='b')
			{cout<<"\n\n\t\t\t================"<<endl;
			cout<<"\t\t\t B U R G E R S"<<endl;
			cout<<"\t\t\t================"<<endl;
			cout<<"1. Value Burger + drink for Rs-/ 300"<<endl;
			cout<<"2. Zinger supreme Burger Rs-/ 350"<<endl;
			cout<<"3. Zinger Burger  Rs-/ 500"<<endl;
			cout<<"4. Sweet chilli Burger Rs-/ 250"<<endl;
			cout<<"5. Lava zinger Burger Rs-/ 575"<<endl;
			cout<<"6. Zinger classic Burger Rs-/ 600"<<endl;
			cout<<"7. Mighty zinger Burger Rs-/ 550"<<endl;
			cout<<"ENTER YOUR CHOICE!\t";
			cin>>ch;
			cout<<endl;
			if (ch==1)
			{
					price=300;
					cost+=price;
			}
			else if (ch==2)
			{
				price=350;
				cost+=price;
			}
			else if (ch==3)
			{
				price=500;
				cost+=price;
			}
			else if (ch==4)
			{
				price=250;
				cost+=price;
			}
			else if (ch==5)
			{
				price=575;
				cost+=price;
			}
			else if (ch==6)
			{
				price=600;
				cost+=price;
			}
			else if (ch==7)
			{
				price=550;
				cost+=price;
			}
			}
			/***********************************************************************/
			if (chh=='C'||chh=='c')
			{   cout<<"\n\n\t\t\t======================="<<endl;
				cout<<"\t\t\t S I D E  I T E M S"<<endl;
				cout<<"\t\t\t======================="<<endl;
				cout<<"1.Mash n gravy  Rs-/150\n";
				cout<<"2.Corn on COB   Rs-/100\n";
				cout<<"3.Chicken Popcorn Rs-/350\n";
				cout<<"4.One piece of chiclen Rs-/60\n";
				cout<<"5.Onion rings Rs-/50\n";
				cout<<"6.French Fries Rs-/150\n";
				cout<<"SELECT YOUR CHOICE!\t";
				cin>>ch;
				cout<<endl;
				if (ch==1)
			{
					price=150;
					cost+=price;
			}
			else if (ch==2)
			{
				price=100;
				cost+=price;
			}
			else if (ch==3)
			{
				price=350;
				cost+=price;
			}
			else if (ch==4)
			{
				price=60;
				cost+=price;
			}
			else if (ch==5)
			{
				price=50;
				cost+=price;
			}
			else if (ch==6)
			{
				price=150;
				cost+=price;
			}
			}
			/***********************************************************************/
			if (chh=='D'||chh=='d')
			{ desserts(); }
				
			/****************************************************************************/
			if (chh=='E'||chh=='e')
			{ drinks();}

			cout<<"Want to Cont.(y/n)";
			cin>>chh;
			cout<<endl;
			if(chh=='y')
			{
				system("CLS");
				goto k;
			} 
			else cout<<"YOUR TOTAL BILL IS: Rs."<< cost <<"/-\n\n";
}};//class kfc
//////////////////////////////////////////////////////////////////////////////////////////////////


class chopsoy : public menu
{ public:
chopsoy()
{ cost=0;
            cout<<"\n\n\t\t\t**************************************"<<endl;
	        cout<<"\t\t\t   W E L C O M E  T O  C H O P S O Y "<<endl;
			cout<<"\t\t\t**************************************"<<endl;
			chop:cout<<"Choose Menu Type: "<<endl
				<<"1.A for STARTERS\n2.B for SOUPS\n3.C for NOODLES & CHOPSOY\n4.D for DESERT\n5.E for SOFT DRINKS"<<endl;
				cin>>chh;
			system("CLS");
			if (chh=='A'||chh=='a')
			{ cout<<"\n\n\t\t\t========"<<endl;
			cout<<"\t\t\tSTARTERS"<<endl;
			cout<<"\t\t\t========"<<endl;
			cout<<"1. Chicken Bang Bang for Rs.395/-"<<endl;
			cout<<"2. Chicken Drum Stick for Rs.465/-"<<endl;
			cout<<"3. Chicken Lolly Pop for Rs.445/-"<<endl;
			cout<<"4. Spicy Garlic Wings for Rs.395/-"<<endl;
			cout<<"5. Prawn Balls for Rs.475/-"<<endl;
			cout<<"ENTER YOUR CHOICE:\t";
			cin>>ch;
			cout<<endl;
			if (ch==1)
			{
					price=395;
					cost+=price;
			}
			else if (ch==2)
			{
				price=465;
				cost+=price;
			}
			else if (ch==3)
			{
				price=445;
				cost+=price;
			}
			else if (ch==4)
			{
				price=395;
				cost+=price;
			}
			else if (ch==5)
			{
				price=475;
				cost+=price;
			}}
			/***************************************************/
			if (chh=='B'||chh=='b')
			{ cout<<"\n\n\t\t\t======="<<endl;
			cout<<"\t\t\t SOUPS"<<endl;
			cout<<"\t\t\t======="<<endl;
			cout<<"1. Chicken Corn Soup for Rs.195/-"<<endl;
			cout<<"2. Hot & Sour Soup Black for Rs.235/-"<<endl;
			cout<<"3. Tom Yum Soup for Rs.235/-"<<endl;
			cout<<"4. Eight Treasure Soup for Rs.235/-"<<endl;
			cout<<"5. Hot & Sour Soup Red for Rs.195/-"<<endl;
			cout<<"ENTER YOUR CHOICE!\t";
			cin>>ch;
			cout<<endl;
			if (ch==1)
			{
					price=195;
					cost+=price;
			}
			else if (ch==2)
			{
				price=235;
				cost+=price;
			}
			else if (ch==3)
			{
				price=235;
				cost+=price;
			}
			else if (ch==4)
			{
				price=235;
				cost+=price;
			}
			else if (ch==5)
			{
				price=195;
				cost+=price;
			}}
			/***********************************************************************/
			if (chh=='C'||chh=='c')
			{   cout<<"\n\n\t\t\t================="<<endl;
				cout<<"\t\t\tNOODLES & CHOPSOY"<<endl;
				cout<<"\t\t\t================="<<endl;
				cout<<"1. American Style Chopsoy for Rs.595/-\n";
				cout<<"2. Chinese Style Chopsoy for Rs.595/-\n";
				cout<<"3. Chicken Chowmein for Rs.415/-\n";
				cout<<"4. Beef Chowmein for Rs.375/-\n";
				cout<<"5. Chopsoy Ala Second for Rs.595/-\n";
				cout<<"SELECT YOUR CHOICE!\t";
				cin>>ch;
				cout<<endl;
				if (ch==1)
			{
					price=595;
					cost+=price;
			}
			else if (ch==2)
			{
				price=595;
				cost+=price;
			}
			else if (ch==3)
			{
				price=415;
				cost+=price;
			}
			else if (ch==4)
			{
				price=375;
				cost+=price;
			}
			else if (ch==5)
			{
				price=595;
				cost+=price;
			}}
			/***********************************************************************/
			if (chh=='D'||chh=='d')
			{ desserts();}
			/****************************************************************************/
			if (chh=='E'||chh=='e')
			{ drinks();}
				
			cout<<"Want to Cont.(y/n)";
			cin>>chh;
			cout<<endl;
			if(chh=='y')
			{
				system("CLS");
				goto chop;
				} 
			else cout<<"YOUR TOTAL BILL IS: Rs."<< cost <<"/-\n\n"<<endl;
}};//chopsoy
//////////////////////////////////////////////////////////////////////////////////////////

class restaurant
{ protected:
  int chhh;
  customer c;
  feedback f;
  menu m;
public: 
       restaurant()
	   {c.mainmenu();
	   c.login();
	   }

	   void display()
	   { m.display();
		if (x==1)
		{ Kfc k;
		system("PAUSE");
		system("CLS");
		c.information();
		system("PAUSE");
		system("CLS");
		f.comm();}
		
		else if (x==2)
		{ chopsoy co;
		system("PAUSE");
		system("CLS");
		c.information();
		system("PAUSE");
		system("CLS");
		f.comm();}
		else {exit(0);}
	}
};//restaurant
////////////////////////////////////////////////////////////////////////////////////////
int main()
{ restaurant r;
r.display(); }












