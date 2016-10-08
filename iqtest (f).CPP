/*IQ-Challenger-Computer Science Project of Tanvi Lamba & Raka Choudhury*/
				  //HEADER FILES
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<graphics.h>
#include<dos.h>                    //FOR delay()
#include<time.h>                   //FOR clock(),CLK_TCK()
#include<ctype.h>                  //FOR toupper(),toupper()
#include<iomanip.h>                //FOR setw()
#include<stdlib.h>                 //FOR random(),srand()

				 //CLASS DEFINITIONS


class Administrator
{
	fstream F1;
	int sno,A,B,C,D,task,qsno,randsno;
	char adques[250],rep,ap[6];
public:
int findsno();
void dispques(int);
Administrator()
{
	sno=A=B=C=D=0;

}

void admin();

}ad,adf;


 int Administrator::findsno()
{
	F1.open("Admques.dat",ios::in|ios::binary);             //put pipe symbol
	while(F1.read((char*)&adf,sizeof(adf)));
	{
		ad.sno=adf.qsno;
	}
	F1.close();
	return ad.sno;
}


class PASSWORD
{
	char ch[6],reply[10];
	int chance;
	public:
	char name[50];
	int TITLE();
	PASSWORD()
	{


		chance=1;ch[6]=reply[10]=name[50]=0;
			int driver=EGA,mode=EGAHI,errorcode;
	initgraph(&driver,&mode,"\\TC\\BGI");      //Initialize graphics.h
	setbkcolor(12);                            //TITLE PAGE
	settextstyle(2,0,8);
	setcolor(8);
	outtextxy(50,40,"COMPUTER PROJECT");
	delay(500);
	outtextxy(90,70,".......A SHORT C++ PROGRAMMING NAMED:");
	delay(500);    	settextstyle(1,0,6);	setcolor(4);
	outtextxy(100,120,"I.Q. CHALLENGER");
	delay(500);	settextstyle(2,0,5); 	setcolor(6);
	outtextxy(50,240,"MADE UNDER THE SUPERVISION AND GUIDANCE OF:");
	outtextxy(50,260,"Ms.Vaishali Lamba");
	delay(500); 	settextstyle(2,0,5);	setcolor(14);
	outtextxy(260,280,"A PIECE OF HARDWORK BY:");
	outtextxy(280,300,"Raka Choudhury (Roll No.-    ,Class-XII-F )");
	outtextxy(280,320,"& Tanvi Lamba (Roll No.-   ,Class-XII-F )");
	delay(7000);
	clrscr();

	initgraph(&driver,&mode,"\\TC\\BGI");
	setbkcolor(14);
	settextstyle(1,0,45);
	setcolor(1);
	outtextxy(110,100,"IQ");
	delay(2000);
	setbkcolor(14);
	settextstyle(1,0,7);
	setcolor(4);
	outtextxy(200,170,"Challenger");
	delay(1000);
	closegraph();
	}
	int level;
	void password();                    //accepts password,checks & allows to retry
	~PASSWORD(){}
}P;
class MENU
{
	int choice,imp;
	char morep,rep;                //MORE PRACTICE & Do you want to quit?
	void info();
	void society();
	void ideals();

	void improve();
	void ask();
	void tips();
	void prac();
	public:
	void EXIT();
	MENU()
	{
		choice=imp=0;
		rep=morep=' ';
	}
	void menu();
	void display();
	~MENU(){}
}M;
class CHALLENGE
{
	int h,num[13];
	float start,end;	     //clock()
	void instructions();
	void test1();                  //less than 16
	void test2();                  //more than 16
	public:
	float t;
	int age;
	void challenge();                //Asks age of user
	void ques();                     //Generates 13 random numbers & stores in num[13]
	CHALLENGE()
	{
		age=h=start=end=t=num[10]=0;

	}
	~CHALLENGE(){}
}C1;

class RESULT{
		char ans;
		int marks;         //per question
		float final,f;
		void res(int marks)       // FUNCTION OVERLOADING HERE
		{
		     total=total+marks;
		}
		public:
		int total;
		RESULT()
		{
			ans=marks=total=final=f=0;
		}
		void res(int a,int b,int c,int d)
		{
			ans=getch();
			ans=toupper(ans);
			if(ans=='A')
			marks=a;
			else if(ans=='B')
			marks=b;
			else if(ans=='C')
			marks=c;
			else if(ans=='D')
			marks=d;
			else
			marks=0;
			res(marks);
			clrscr();
			gotoxy(20,10);
		}
			void res();

		~RESULT(){}
		}R;

class RECORD                           //Base Class
  {
	protected:
	char rname[50];
	int rtotal,rage;
	public:
	void record();
	RECORD()
	{}
	~RECORD(){}

  }rec;                                      //Inheritance used here
class highest:private RECORD
  {     public:
	void toppers();                                        //Derived class
	int hfirst,hsecond,hthird,hage1,hage2,hage3;
	char hname1[30],hname2[30],hname3[30];
	highest()
	{}
	~highest(){}
				     //Single level inheritance;
  }high1,high2;
void main()
{
	P.password();


}
void Administrator::admin()
{
	cout<<"Enter the 6 character password for administrator login(you'll be given a single chance only):";
	for(int i=0;i<6;i++)
	{                                  //accepting password
		ap[i]=getch();
		cout<<"*";
	}                                    //checking
		if(ap[0]=='t'&&ap[1]=='r'&&ap[2]=='1'&&ap[3]=='7'&&ap[4]=='2'&&ap[5]=='6')
		{       clrscr();
			gotoxy(28,13);
			cout<<"Correct password ";
			gotoxy(32,15);
			clrscr();
	cout<<"\n\nWelcome to the Administrator Level";
	cout<<"\n\n1.Add questions";
	cout<<"\n\n0.Exit";
	cout<<"\nEnter choice:";
	cin>>task;
	if(ad.task==0) { cout<<"\n\n\t\tGood Bye.";delay(1000);
	exit(0);  }
	else if(task==1)
	{       adtop:
		 int fq;
		fq=findsno();
		F1.open("Admques.dat",ios::app|ios::binary);                           //pipe
		adf.qsno=fq+1;
		cout<<"Enter the question that you want to add:\n";
		gets(adf.adques);
		cout<<"Enter marks for option-A";
		cin>>adf.A;
		cout<<"Enter marks for option-B";
		cin>>adf.B;
		cout<<"Enter marks for option-C";
		cin>>adf.C;
		cout<<"Enter marks for option-D";
		cin>>adf.D;

		F1.write((char*)&adf,sizeof(adf));
		F1.close();
		cout<<"\nDo you want to add more questions?(Y/N):";
		cin>>rep;
		rep=toupper(rep);
		if(rep=='Y')
	      {  clrscr();
		goto adtop;
	      }
		else{    cout<<"\n\n\t\tGood Bye.";delay(1000);exit(0);
		}
	}
}
else {cout<<"\n\nIncorrect Password.Access Denied."; getch();}
}

void Administrator::dispques(int randsno)
{
	F1.open("Admques.dat",ios::in|ios::binary);             //put pipe symbol
	randsno=randsno-20;
	while(F1.read((char*)&adf,sizeof(adf)));
	{
		if(randsno==adf.sno)
		{
			cout<<adf.adques;
			R.res(adf.A,adf.B,adf.C,adf.D);
		}
	}
}



void PASSWORD::password()
{       clrscr();
	start:
	textcolor(CYAN);
	cout<<"\nEnter the six character password\t";
	for(int i=0;i<6;i++)
	{                                  //accepting password
		ch[i]=getch();
		cout<<"*";
	}                                    //checking
		if(ch[0]=='1'&&ch[1]=='1'&&ch[2]=='2'&&ch[3]=='3'&&ch[4]=='5'&&ch[5]=='8')
		{       clrscr();
			gotoxy(28,13);
			cout<<"Correct password ";
			gotoxy(32,15);                //correct password
			cout<<"WELCOME";
			delay(1000);
			name:
			clrscr();
			gotoxy(28,13);
			cout<<"Enter your name please\t ";
			gets(name);
				if(strlen(name)==0)
			{
				cout<<setw(48)<<"Name not entered.";
				delay(1000);
				goto name;
			}
			M.display();
			cout<<"\t\t\tPRESS ANY KEY TO GO TO MENU.";
			getch();
			clrscr();
			cout<<"\n\n \t\t\t\tMENU\n\n";
			cout<<"1.ADMINISTRATOR LEVEL";
			cout<<"\n2.USER LEVEL";
			cout<<"\n0.EXIT";
			cout<<"\n\n\n\t\t  Enter the chosen option number\t";
			cin>>level;
			switch(level)
			{
			case 0:M.EXIT();
			case 2:M.menu();
			case 1:{
			clrscr();ad.admin();}

			}

		}
		else
		{
						    //incorrect password
			cout<<"\nIncorrect Password";
			getch();
			if(chance==3)      //Since value of chance is initialized at 1
			goto out;
			again:
			clrscr();
			cout<<"\nDo you wish to try again(Yes/No)";  //another attempt if chance<=3
			cin>>P.reply;
			clrscr();
			if(strcmpi(P.reply,"Yes")==0)
			{chance++;
			goto start;
			}
			else if(strcmpi(P.reply,"No")==0)
			exit(0);
			else {
			cout<<"Invalid Entry";
			getch();
			goto again;
		}


		   out:
		clrscr();
		cout<<"\nThree chances are over.";
		cout<<"\nAccess Denied";
		getch();
		exit(0); }


 }
void MENU::display()
{
for(int i=1;i<81;i++)
			{

				gotoxy(i,23);
				cout<<"-";
			}

}
 void MENU::menu()
 {
	menu:
	textcolor(YELLOW);
	clrscr();
	cout<<"\n\t\t\t\tMAIN MENU";
	cout<<"\n\n\t1.What is IQ?";
	cout<<"\n\n\n\t2.Take the challenge";
	cout<<"\n\n\n\t3.Highest Scores";
	cout<<"\n\n\n\t4.Compare yourself with your ideals";
	cout<<"\n\n\n\t5.Improve your IQ";
	cout<<"\n\n\n\t6.High IQ societies";
	cout<<"\n\n\n\t0.Exit";
	cout<<"\n\n\n\t\t  Enter the chosen option number\t";
	choice=getch();
	switch(choice)
	{
		case'1':M.info();break;
		case'2':C1.challenge();break;
		case'3':high1.toppers();break;
		case'4':M.ideals();break;
		case '5':M.improve();break;
		case '6':M.society();break;
		case'0':M.EXIT();
		default:cout<<"Invalid Entry";goto menu;
	}

 }

void MENU::info()
{
	clrscr();
	textcolor(YELLOW);

	cout<<"\n\t\t\t\tINTRODUCTION";
	cout<<"\n\n\nWhat is IQ?";
	cout<<"\n\n\nIQ stands for Intelligence Quotient.";
	cout<<"\n\nIt is a number intended to represent ";
	cout<<"a measure of relative intelligence as\ndetermined";
	cout<<" by the person's responses to a series of test problems.";
	cout<<"\n\nThe IQ was originally computed as the ratio of a person's mental age ";
	cout<<" to his or her chronological(physical) age,multiplied by 100.";
	cout<<"\n\nBut,use of the concept of mental age has been largely discontinued.";
	cout<<"\nIQ is now generally assessed on the basis of statistical distribution of scores.";
	cout<<"\n'IQ Challenger' is the ultimate test of your brain power.";
	cout<<"\nThrough this test,your visual,mathematical and lateral-thinking abilities\nwill be stretched to the limit.";
	display();
	cout<<"\t\t\tPRESS ANY KEY TO RETURN TO MAIN MENU.";
	getch();
	clrscr();
	M.menu();
}
void MENU::ideals()
{
clrscr();
textcolor(YELLOW);

cout<<setw(30)<<"\t\t\tSome famous IQ's";

cout<<"\n\n\tNAME\t\t\t\tPROFESSION\t\t\tIQ"<<endl;
cout<<"\nLeonardo Da Vinci\t\t\t Artist/Inventor \t\t220"<<endl;
cout<<"Voltaire \t\t\t\t"<<setw(4)<<"Writer\t\t\t\t190"<<endl;
cout<<"Garry Kasparov\t\t\t \tChess grandmaster\t\t 190 "<<endl;
cout<<"Galileo Galilei\t\t\t\t Physicist/Astronomer\t\t 185"<<endl;
cout<<"Descartes\t\t\t\t Mathematician \t\t\t180"<<endl;
cout<<"Immanuel Kant\t\t\t\t Philosopher\t\t\t 175"<<endl;
cout<<"Plato\t\t\t\t\t Philosopher\t\t\t 170"<<endl;
cout<<"Charles Darwin \t\t\t\tNaturalist\t \t\t165"<<endl;
cout<<"Wolfgang Amadeus Mozart\t\t\t Composer\t\t\t 165"<<endl;
cout<<"Albert Einstein\t\t\t\t Physicist\t \t\t160"<<endl;
cout<<"Bill Gates\t\t\t\tFounder-Microsoft\t\t 160 "<<endl;
cout<<"Nicolaus Copernicus \t\t\tCleric/Astronomer \t\t160 "<<endl;
cout<<"Rembrandt van Rijn\t\t\t Painter/Etcher \t\t155 "<<endl;
cout<<"Abraham Lincoln \t\t\tPresident \t\t\t150 "<<endl;
cout<<"Napoleon Bonaparte\t\t\t Emperor\t\t\t 145 "<<endl;
cout<<"Richard Nixon \t\t\t\tPresident\t\t\t 143"<<endl;
cout<<"Hillary Clinton\t\t\t\t Senator\t \t\t140 "<<endl;
cout<<"Madonna\t\t\t\t\t Singer\t\t\t\t"<<setw(5)<<" 140 "<<endl;
	display();
	cout<<"\t\t\tPRESS ANY KEY TO RETURN TO MAIN MENU.";
	getch();
	clrscr();
	M.menu();
}
void MENU::society()
{clrscr();
 textcolor(YELLOW);

cout<<"\n\t\t\tHIGH IQ SOCIETIES :\n "
<<"\nMENSA : Mensa is the largest, oldest, and best-known high-IQ society in the world.Potential members must score within the top 2% (at or above the 98th percentile)of any approved standardized intelligence test."
<<"\nTHE PARS SOCIETY: Pars Society was founded in 2002 by Baran Y”nter as a high intelligence society."
<<"\nThe GIGA SOCIETY : An IQ of 196 or higher is required to join. "
<<"\nTHE SIGMA SOCIETY : Sigma Society is an organization of international scope."
<<"\nINTERNATIONAL HIGH IQ SOCIETY : The 2nd largest high-IQ organisation in the world. Membership in the International High IQ Society is open to persons who have an IQ in the top five percent of the population. "
<<"\nTHE MEGA FOUNDATION : A tax-exempt non-profit charitable organization established to create and implement programs that aid in the development of severely gifted individuals and their ideas."

<<"\nMYSTERIUM :Mysterium is a nurturing, stimulating, and inspiring growth link to human creativity, ingenuity, and originality that is undergirded by experience and productivity."
<<"\nThere are many others like THE CEREBRALS SOCIETY,THE PROMETHEUS SOCIETY,THE TRIPLE NINE SOCIETY etc.";
	display();
	cout<<"\t\t\tPRESS ANY KEY TO RETURN TO MAIN MENU.";
	getch();
	clrscr();
	M.menu();
}
void MENU::EXIT()
  {             clrscr();
	textcolor(YELLOW);

		  ex:
		  gotoxy(20,13);                  //final asking
		cout<<"Do you want to quit IQ Challenger?(Y/N)";
		cin>>rep;
		rep=tolower(rep);

		if(rep=='y')
		{
			gotoxy(28,15);
			cout<<"Good bye "<<P.name<<".";
			delay(1500);
			exit(0);
		}
		else if(rep=='n')            //not quitting
		{       delay(1000);
			menu();               //goes back to main menu
		}
		else
		{
			gotoxy(28,15);
			cout<<"Invalid Entry.";
			delay(1000);
			clrscr();
			goto ex;
		}
	}
void MENU::improve()
{
	clrscr();
	cout<<"\t\t\t   IMPROVE YOUR IQ";
	cout<<"\n\n\n\t\t\t\tSub-Menu";
	cout<<"\n\n\n1.Tips to improve your IQ";
	cout<<"\n\n2.Practice Questions";
	cout<<"\n\n3.Return to Main Menu";
	cout<<"\n\nEnter your choice\t";
	top:
	cin>>imp;
	if(imp==1)
	{tips();}
	else if(imp==2)
	{prac();}
	else if(imp==3)
	{M.menu(); }
	else
	{
		cout<<"Invalid Entry";
		clreol();
		imp=0;
	}
}
void MENU::tips()
{       clrscr();
	cout<<"\n\t\t\t Tips To Improve Your IQ";
	cout<<"\n\n\n1. Read!  Reading enhances the mind's ability to comprehend,\n as well as encourages you to think critically. ";
	cout<<"\n\n2.Try writing with your opposite hand. Writing with your opposite hand\n can in fact lead to stimulation of the side of the brain that is\n opposite to that hand.";
	cout<<"\n\n3.Write whenever possible. Send a note instead of an email,\n or write a draft of a paper (or an outline). \n";
	cout<<"	It will increase visual and kinesthetic stimulation.";
	cout<<"\n\n4. Play video games. Games can be a great way to stimulate the brain. ";
	cout<<"\n\n5.Work on cryptology. This is when a message is written in codes and \n  you try to figure it out.";
	cout<<"\n It's challenging for some, but after a while may even become enjoyable.\n All logic puzzles are great.";
	display();
	cout<<"\t\t\t\tPRESS ANY KEY TO CONTINUE.";
	getch();
	clrscr();
	cout<<"\n\n6.Practice crosswords and sudoku. These activities stimulate your mind\n   and thought processes. ";
	cout<<"\n\n7.Do logic and lateral thinking puzzles. These help your brain think \n   outside the box and solve problems in different ways.";
	cout<<"\n\n8.Take a weekly IQ test and record your results,if you would like to\n view your improvement.";
	cout<<"\n\nDon't give up. Ignore limiting stereotypes such as 'An old dog cannot learn new tricks.'" ;
	cout<<"\n\n\nImagine the success you will feel when you bump up ten points.\n Soon enough, that fantasy will become a reality.";
	display();
	cout<<"\t\t\tPRESS ANY KEY TO RETURN TO IMPROVE IQ SUB-MENU.";
	getch();
	clrscr();
	improve();
}
void MENU::prac()
{
	clrscr();
	cout<<"\n\t\t\t Practice Questions";
	cout<<"\n\nTry out this question.";
	cout<<"\n\n1.Which year will have the same calender as that of 2005 ?";
	cout<<"\nA.2006 \n B.2008 \n C.2007 \n D.2011";
	display();
	cout<<"\t\t\tPRESS ANY KEY TO VIEW THE SOLUTION.";
	getch();
	clrscr();
	cout<<"\n\n Sol. D";
	cout<<"\nReason. Year:2005+2006+2007+2008+2009+2010";
	cout<<"\n\tOdd days:1+1+1+2+1";
	cout<<"\nTotal number of odd days from 2005 to 2010 are 7.";
	cout<<"\nHence,2011 will have the same calender as that of 2005,";
	ask();
	cout<<"\n2. In the following sequence of letters ,how many vowels are\n immediately preceded  as well as followed by a vowel ?";
	cout<<"\n matammfdadhcoauidakseadeafdcaaaekaaakaea ";
	cout<<"\nA.6\n B.4\n C.5\n D.3";
	display();
	cout<<"\t\t\tPRESS ANY KEY TO VIEW THE SOLUTION.";
	getch();
	clrscr();
	cout<<"\n\nSol. A";
	cout<<"\nReason. There are 6 vowels immediately \npreceded & followed by a vowel";
	cout<<"\noaui-au,aaae-aa,kaaa-a,kaea-e";
	ask();
	cout<<"3.Gum:Stick::Needle:?";
	cout<<"\nA.Cloth\nB.Prick \n C.Taylor \n D.Stitch";
	display();
	cout<<"\t\t\tPRESS ANY KEY TO VIEW THE SOLUTION.";
	getch();
	clrscr();
	cout<<"\n\nSol. D";
	cout<<"\nReason. Gum is used to stick while needle is used to stitch.";
	ask();
	cout<<"4.Find the missing number. 25:36::49:?";
	cout<<"\nA.61\nB.63\nC.65\n D.60";
	display();
	cout<<"\t\t\tPRESS ANY KEY TO VIEW THE SOLUTION.";
	getch();
	clrscr();
	cout<<"\n\nSol. D";
	cout<<"\nReason. 25+11=36\n 49+11=60";
	ask();
	cout<<"5. BDEG:DFGI::HKMO:?";
	cout<<"\nA.ILNP \n B.JMOP \n C.JMOQ \n D.JNOQ";
	display();
	cout<<"\t\t\tPRESS ANY KEY TO VIEW THE SOLUTION.";
	getch();
	clrscr();
	cout<<"\n\nSol. C";
	cout<<"\nReason. 2 letters are added to get the next letters in the analogy.";
	cout<<"\n B+2=D D+2=F E+2=G G+2=I";
	cout<<"\n H+2=J K+2=M M+2=O O+2=Q";
	display();

	cout<<"\t\t\tPRESS ANY KEY TO RETURN TO IMPROVE IQ SUB- MENU.";
	getch();
	improve();
}
void MENU::ask()
{
	repeat:
	cout<<"\n\n\nDo you want to practice more questions ?(y/n)";
	morep=getche();
	morep=tolower(morep);
	if(morep=='y'){clrscr();}
	else if(morep=='n')
	menu();
	else
	{
		cout<<"Invalid Entry";
		clrscr();
		goto repeat;
	}
}
void CHALLENGE::challenge()
 {          age:
	    clrscr();
	    gotoxy(28,13);
	    cout<<"Enter your age\t";
	    cin>>C1.age;
	    if(age=='\0')
	    {
		delay(1000);
		goto age;                //as age has not been entered
	    }
	    else  if(C1.age<=16)
					    //goes to test1
	    {
		M.display();
		cout<<"\t\t\tPRESS ANY KEY TO CONTINUE.";
		getch();
		clrscr();
		C1.instructions();
		C1.test1();
	    }
	    else if(C1.age>16)                  //goes to test2
	    {

		M.display();
		cout<<"\t\t\tPRESS ANY KEY TO CONTINUE.";
		getch();
		clrscr();
		C1.instructions();
		C1.test2();
	    }
	    else
	    {
	    cout<<"Invalid Entry";
	    M.menu();
	    }
 }
void CHALLENGE::instructions()
{       clrscr();
	{

		int driver=EGA,mode=EGAHI,errorcode;
	initgraph(&driver,&mode,"\\TC\\BGI");
	setbkcolor(2);
	settextstyle(2,0,6);
	setcolor(4);
	outtextxy(30,40,"Rene Descartes,a famous mathematician said");
	outtextxy(30,70,"in the Principles of Philosophy,1644:");
	delay(500);
	settextstyle(1,0,1);	setcolor(8);
	outtextxy(15,160,"'If something exists,it exists in some amount.");
	delay(500);
	outtextxy(15,180,"If it exists in some amount,then it is capable of being measured.'");
	delay(500); 	setcolor(4); 	settextstyle(3,0,1);
	outtextxy(130,280,"Your intelligence too can be measured!");
	outtextxy(25,300,"Here we bring you an I.Q. test that measures your intelligence level.");
	delay(3000);	closegraph();
	} clrscr();
	textcolor(BROWN);

	cout<<"\n\t\t\t\tINSTRUCTIONS";
	cout<<"\n\n1.There are 15 questions in all.";
	delay(3000);
	cout<<"\n\n2.Press option alphabet e.g,Press a for option A.";
	delay(2000);
	cout<<"\n\n3.The test is timed and you may lose out on marks if you devote time more than \n 16 minutes to the test.";
	delay(3000);
	cout<<"\n\n4.Use of calculator,log tables and external illegal help is PROHIBITED as the IQ then ,won't be genuine.However,you can use paper and pencil.\n But,AVOID using them also.";
	delay(3000);
	cout<<"\n\n5.Enter the option only when you are confident of your answer as you can not go  back to the same question.";
	delay(4000);
	cout<<"\n\n6.Do not take wild guesses since the calculated IQ may not be genuine and exact  in such a case.";
	delay(3000);
	cout<<"\n\n7.Do not get tensed as this is not a race.Only your IQ would be tested.\n\t\t All the best for your journey ahead...";
	delay(4000);
	M.display();
	cout<<"\t\t\t\tPRESS ANY KEY TO START THE TEST.";
	getch();
	clrscr();
	}
 void CHALLENGE::ques()           //generates 13 random nos.
 { int x1=0,totq=0;
	unsigned int seedval;
	time_t t;
	seedval=(unsigned)time(&t);
	srand(seedval);
	totq=ad.findsno();
	totq=totq+20;
	for(int i=0;i<13;i++)
	{        beg:
		 x1=(rand()%totq)+1;
		 for(int j=0;j<13;j++)
		 {
			if(x1!=num[j]){}
			else
			{
				goto beg;

			}
		 }
		 num[i]=x1;
		 x1=0;
	}

}
void CHALLENGE::test1()
{        ques();                     //for random nos.
	 int driver=EGA,mode=EGAHI,errorcode,a[10],h=0;
	 start=clock();             //clock starts
       while(h<14)
	{
		if(num[h]<=20)
		{
			switch(num[h])               //random nos. used as question nos.
			{

		case 1:
	{
	cout<<h+1<<". What is X ?";
	cout<<"\n\n131 517 192 X";
	cout<<"\n\nA.1\nB.3\nC.5\nD.7";
	R.res(10,3,6,4);
	break;}
	case 2:{
	cout<<h+1<<". What comes next ?";
	cout<<"\n\n  208 CIV 52 XXVI";
	cout<<"\n\nA.26\nB.13\nC.XII\nD.12";
	R.res(4,10,3,6);
	break;}
	case 3: {
	cout<<h+1<<". What are X and Y ?";
	cout<<"\n\n  7 8 6 9 5 10 X Y ";
	cout<<"\n\nA.X=3,Y=12\nB.X=4,Y=11\nC.X=11,Y=4\nD.X=12,Y=3";
	R.res(4,10,6,3);
	break;}
	case 4: {
	cout<<h+1<<". What are X & Y(X,Y) ?";
	cout<<"\n\n  7 8 6 9 5 10 X Y 3 12";
	cout<<"\n\nA.(4,11)\nB.(11,4)\nC.(12,13)\nD.(11,13)";
	R.res(10,6,3,4);
	break;}
	case 5: {
	cout<<h+1<<". What comes next in the series ?";
	cout<<"\n\n  1 2 6 24 120 _";
	cout<<"\n\nA.720\nB.800\nC.7\nD.760";
	R.res(10,4,3,6);
	break;}
	case 6:  {
	cout<<h+1<<". What is X ?";
	cout<<"\n\n  24 81 63 26 412 X";
	cout<<"\n\nA.20\nB.8\nC.64\nD.36";
	R.res(6,10,3,4);
	break;}
	case 7:{
	cout<<h+1<<".If I had one more sister I would have twice as many sisters as brothers.";
	cout<<"\n\n  If I had one more brother I would have the same number of each.";
	cout<<"\n\n  How many brothers and sisters do I have actually?";
	cout<<"\n\nA.Brothers=1,Sisters=2";
	cout<<"\nB.Brothers=2,Sisters=3";
	cout<<"\nC.Brothers=3,Sisters=2";
	cout<<"\nD.Brothers=2,Sisters=1";
	R.res(6,10,3,4);
	break;}
	case 8:{
	cout<<h+1<<".What is X?";
	cout<<"\n\n 4 9 16 25 36 49 _";
	cout<<"\n\nA.63\nB.54\nC.81\nD.64";
	R.res(4,6,3,10);
	break;}
	case 9:      {
	cout<<h+1<<". 13*3=40\n   12*3=35\n   15*3=46\n   16*3=47";
	cout<<"\n\n\tWhat does 17*3=?";
	cout<<"\n\nA.51\nB.52\nC.50\nD.None of these";
	R.res(6,10,4,3);
	break;}
	case 10:    {
	cout<<h+1<<". A factory was cuting eolls of cloth into 1 metre lengths,";
	cout<<"\nform a 200 metre roll.";
	cout<<"\How long would it take for the machine \nto cut the roll if each cut took 4 secs?";
	cout<<"\n\nA.796 secs\nB.800 secs\nC.786 secs\nD.840 secs";
	R.res(10,6,4,3);
	break;}
	case 11:   {
	cout<<h+1<<". What is the last term in this series?";
	cout<<"\n\n   B 2 T 20 Q 17 G 7 C _";
	cout<<"\n\nA.12\nB.5\nC.R\nD.3";
	R.res(4,6,3,10);
	break;}
	case 12:  {
	cout<<h+1<<".What are X and Y?";
	cout<<"\n\n  1 3 3 6 5 9 7 12 X Y";
	cout<<"\n\nA.X=9,Y=15";
	cout<<"\nB.X=10,Y=16";
	cout<<"\nC.X=11,Y=21";
	cout<<"\nD.X=9,Y=21";
	R.res(10,4,3,6);
	break;}
	case 13:{
	cout<<h+1<<".Which of these is likely to be 5.5 metres tall?";
	cout<<"\nA.tiger";
	cout<<"	\nB.man";
	cout<<"	\nC.gorilla ";
	cout<<"\nD.giraffe";
	R.res(3,4,6,10);
	break;}
	case 14:{
       cout<<h+1<<".A fallacy is an incorrect result\n arrived at by apparently correct ,\nthough actually false reasoning.\n";
       cout<<"	A common example of a mathematical fallacy\n is the 'proof' that 1=2 as follows:";
       cout<<" \n	let a=b ";
       cout<<" \n	 ab=b.b                  step 1";
	cout<<"\n ab-a.a=b.b-a.a		 step 2";
	cout<<"\n a(b-a)=(b+a)(b-a)	 step 3";
	cout<<"\n a=b+a			 step 4";
	 cout<<"\n a=2a			 step 5 ";
	cout<<"\n 1=2			 step 6";
	 cout<<"\nA.step 1";
	 cout<<"\nB.step 2";
	 cout<<"\nC.step 3";
	cout<<"\n D.step 4";
	R.res(6 ,6 ,4 ,10);
	break;}
	case 15:{
	cout<<h+1<<".In a certain code 'adg' means 'boys are intelligent',\n'gam' means 'select intelligent boys',";
	cout<<"\n'agp' means 'encourage intelligent boys',which letter code means 'select'?";
	cout<<"\n  A.g";
	cout<<"\n  B.d";
		cout<<"\nC.m ";
		cout<<"\nD.p";
		R.res(6,3,10,4);
		break;}
	case 16:{
	cout<<h+1<<".If CAT x AT=3 and BITxIT=2,then HISxIS=";
	cout<<"\nA.5";
	cout<<"\nB.6";
	cout<<"\nC.10";
	cout<<"\nD.8";
	R.res(3,4,10,6);
	break;}

	case 17:{
	cout<<h+1<<".Hari told Giri that a ghost is living by the peepal tree\n on the outskirts of the village.";
	cout<<"\nWhich of the conclusions can be drawn from the above statement?";
	cout<<"\nA.ghosts live on peepal trees";
	cout<<"\nB.peepal trees grow on the outskirts of the village";
	cout<<"\nC.hari perhaps believed in the stories of ghosts";
	cout<<"\nD.Giri must be afraid of ghosts";
	R.res(4,3,10,6);
	break;}
	case 18:{
	cout<<h+1<<".If 'APPEAR' is coded as 'PAEPRA',\n'PROVIDENCE' can be coded as  ";
       cout<<"\n	A.PORIVEDCNE    ";
       cout<<"\n	B.PROVIDENCE    ";
       cout<<"\n	C.RPVODINEEC   ";
       cout<<"\n	D.EORIVEDCEP   ";
       R.res(3,6,10,4);
       break;}
       case 19:
       {
	cout<<h+1<<".My father is double the age of my sister.My mother is 10 years elder to me.";
	cout<<"I was 5 years old when my sister was born.If my sister is 17 years old.";
	cout<<"What is the difference in the age of my parents ?";
	cout<<"\nA.2 \n B.5 \n C.7 \n D.9";
	R.res(10,6,4,3);
	break;
	}
	case 20:{ cout<<h+1<<"If LATE is coded as 38,how will you code MAKE ?";
cout<<"\n a.25\n b.30 \n C. 35 \n D. 40";

R.res(10,3,4,6);

break;}
}               //closes switch
}		//closes if
else if(num[h]>20)
{        ad.dispques(num[h]);
}

 h++;            //inside while
 }              //closes while

	initgraph(&driver,&mode,"\\TC\\BGI");        //2 compulsory questions
	outtextxy(10,95,"14.How many squares are there ?");
	rectangle(230,240,107,130);
	rectangle(230,270,140,130);
	rectangle(230,300,170,130);
	rectangle(230,330,200,130);
	line(230,212,106,212);
	line(230,185,106,185);
	line(230,155,106,155);
	outtextxy(300,200,"A.40");
	outtextxy(400,200,"B.37");
	outtextxy(300,250,"C.22");
	outtextxy(400,250,"D.33");
	R.res(10,4,3,6);
	closegraph();

	gotoxy(20,10);
       {
	initgraph(&driver,&mode,"\\TC\\BGI");
	outtextxy(10,40,"15.Given below is a network .");
	outtextxy(10,50,"Points 1,2,etc. are called 'nodes' and lines joining them 'links'.");
	outtextxy(10,60,"is it possible to complete a full route of links WITHOUT REPEATING ANY LINK.");
	outtextxy(10,70,"We can repeat nodes.How shall we proceed?");
	rectangle(230,240,107,130);
       line(230,185,106,185);

       outtextxy(240,130,"2");

       outtextxy(240,240,"6");
       outtextxy(80,240,"5");
       outtextxy(80,130,"1");
       outtextxy(80,180,"3");
       outtextxy(240,180,"4");
	outtextxy(40,250,"A. start from any node");
	outtextxy(290,250,"B.start from nodes 1 or 2");
	outtextxy(40,280,"C.start from nodes 3 or 4");
	outtextxy(290,280,"D.not possible");
	R.res(4,6,10,3);

	closegraph();      }
	end=clock();
	t=(end-start)/CLK_TCK;
	t=t/60;
	R.res();
	getch();

}

void CHALLENGE::test2()
{        ques();

	 int driver=EGA,mode=EGAHI,errorcode,a[10],h=0;
	 start=clock();
       while(h<14)
	{
		if(num[h]<=20)
		{
	switch(num[h])

{
case 1:{
	gotoxy(60,10);
	cout<<h+1<<".If I had one more sister I would have twice as many sisters as brothers.";
	cout<<"\n  If I had one more brother I would have the same number of each.";
	cout<<"\n  How many brothers and sisters do I have actually?";
	cout<<"\n\nA.Brothers=1,Sisters=2";
	cout<<"\nB.Brothers=2,Sisters=3";
	cout<<"\nC.Brothers=3,Sisters=2";
	cout<<"\nD.Brothers=2,Sisters=1";
	R.res(6,10,3,4);
	break;}
case 2:{
	gotoxy(20,10);
	cout<<h+1<<".Assuming 3 of these dates are correct,which one is wrong?";
	cout<<"\n\nA.Saturday 21 January 1764";
	cout<<"\nB.Saturday 11 February 1764";
	cout<<"\nC.Saturday 11 March 1764";
	cout<<"\nD.Saturday 14 April 1764";
	R.res(3,4,6,10);
	break;}
case 3:{
	gotoxy(20,10);
	cout<<h+1<<".What two terms complete the series?";
	cout<<"\n\n  A 1 D 4 H 8 M 13 _ _";
	cout<<"\n\nA.R,19\nB.S,19\nC.Q,18\nD.R,18";
	R.res(6,10,3,4);
	break;}
case 4:  {
	gotoxy(20,10);
	cout<<h+1<<".\t  2";
	cout<<"\n         3 6";
	cout<<"\n       8 15 22";
	cout<<"\n      38 _98 156";
	cout<<"\n\nA.60\nB.61\nC.59\nD.58";
	R.res(3,6,10,4);
	break;}
case 5:{
	gotoxy(20,10);
	cout<<h+1<<".Looking at the columns below,work out what is X.";
	cout<<"\n\n2 1 8 5 9";
	cout<<"\n3 7 2 6 2";
	cout<<"\n4 2 1 1 X";
	cout<<"\n\nA.13\nB.1\nC.2\nD.11";
	R.res(6,10,3,4);
	break;}
case 6:{
	gotoxy(20,10);
	cout<<h+1<<".A bag contains 64 balls of eight different colours.";
	cout<<"\n  There are eight of each colour (including red).";
	cout<<"\n  What is the least number you would have to pick,without looking,";
	cout<<"\n  to be sure of selecting 3 red balls?";
	cout<<"\n\nA.56\nB.59\nC.61\nD.58";
	R.res(6,10,3,4);
	break;}
case 7:        {
	gotoxy(20,10);
	cout<<h+1<<".If:4 equals 4,";
	cout<<"\n     9 equals 7.5,";
	cout<<"\n     16 equals 12,";
	cout<<"\n     25 equals 17.5,";
	cout<<"\n     36 equals 24,";
	cout<<"\n     48 equals 31.5";
	cout<<"\n\nWhat does 64 equal?";
	cout<<"\n\nA.39.5\nB.39\nC.40\nD.41";
	R.res(3,6,10,4);
	break;}
case 8:{
	 cout<<h+1<<".A fallacy is an incorrect result arrived at by apparently correct ,\nthough actually false reasoning.";
       cout<<"	A common example of a mathematical fallacy is the 'proof' that 1=2 as follows:";
       cout<<"	let a=b ";
       cout<<"	 ab=b.b                  step 1";
	cout<<" ab-a.a=b.b-a.a		 step 2";
	cout<<" a(b-a)=(b+a)(b-a)	 step 3";
	cout<<" a=b+a			 step 4";
	 cout<<"a=2a			 step 5 ";
	cout<<" 1=2			 step 6";
	 cout<<"\nA.step 1";
	 cout<<"\nB.step 2";
	 cout<<"\nC.step 3";
	cout<<"\n D.step 4";
	R.res(4,6,3,10);break;}
case 9:{
cout<<h+1<<".In a certain code 'adg' means 'boys are intelligent',\n'gam' means 'select intelligent boys',";
	cout<<"\n'agp' means 'encourage intelligent boys',which letter code means 'select'?";
	cout<<"\n	A.g";
	cout<<"\n	B.d";
		cout<<"\nC.m ";
		cout<<"\nD.p";
		R.res(6,4,10,3);break;}
case 10:{
	cout<<h+1<<".\nIf CAT x AT=3 and BITxIT=2,then HISxIS=";
	cout<<"\nA.5";
	cout<<"\nB.6";
	cout<<"\nC.10";
	cout<<"\nD.8";
	R.res(3,4,10,6);
	break;}
case 11:{
cout<<h+1<<".Hari told Giri that a ghost is living by the peepal tree\n on the outskirts of the village.";
	cout<<"\nWhich of the conclusions can be drawn from the above statement?";
	cout<<"\nA.ghosts live on peepal trees";
	cout<<"\nB.peepal trees grow on the outskirts of the village";
	cout<<"\nC.hari perhaps believed in the stories of ghosts";
	cout<<"\nD.Giri must be afraid of ghosts";
	R.res(3,4,10,6);
	break;}
	case 12:{
	cout<<h+1<<".If 'APPEAR' is coded as 'PAEPRA',\n'PROVIDENCE' can be coded as  ";
       cout<<"\n	A.PORIVEDCNE    ";
       cout<<"\n	B.PROVIDENCE    ";
       cout<<"\n	C.RPVODINEEC   ";
       cout<<"\n	D.EORIVEDCEP   ";
       R.res(3,6,10,4);
       break;}
case 13:{
cout<<h+1<<".Which of these sentences has a SPELLING ERROR?";
cout<<"\nA.the old man was afraid of the apparition of his wife.";
cout<<"\nB.the adamant student refused to give up the arguement.";
cout<<"\nC.the children watched the magician in fascination.";
cout<<"\nD.some people love to exaggerate during narrations.";
R.res(6,10,3,4);
break;}
case 14:{

cout<<h+1<<".We look up a word in a thesaurus to";
cout<<"\nA.see the word in another language";
cout<<"\nB.see how the word is spelt";
cout<<"\nC.find another word with the same meaning";
cout<<"\nD.find the word used in a sentence ";
R.res(4,3,6,10);
break;}
case 15:{
cout<<h+1<<".If a doughnut shaped house\n has two doors to the outside and three doors to the inner courtyard, \nthen it's possible to end up back at your starting place by walking through all five doors of the house\n without ever walking through the same door twice. ";
	 cout<<"\nA.yes";
	cout<<"\nB.no";
	R.res(10,6,0,0);
	break;}
case 16:{
cout<<h+1<<".If each of seven persons in a group shakes hands\n with each of the other six persons,\n then a total of forty-two handshakes occurs.";

cout<<"\nA.yes";
cout<<"\nB.no";
R.res(6,10,0,0);
break;}
case 17:{
cout<<h+1<<".A square whose sides each measure ten centimeters\n can completely fit inside of a regular hexagon whose sides each measure ten centimeters.";
cout<<"\nA.yes";
cout<<"\nB.no";
R.res(12,5,0,0);
break;}
case 18:
{
	cout<<h+1<<"Which is the nearest in meaning to the word 'FRIVOLOUS'?";
	cout<<"A.Sinister\nB.Important\nC.Warm\nD.Trivial";
	R.res(3,6,4,10);
	break;
}
case 19:
{
	cout<<h+1<<"Which number should come next in this series?";
	cout<<"\n0,3,8,15";
	cout<<"A.24\nB.28\nC.39\nD.41";
	R.res(10,4,6,3);
	break;
}
case 20:{ cout<<"If LATE is coded as 38,how will you code MAKE ?";
cout<<"\n a.25\n b.30 \n C. 35 \n D. 40";

R.res(10,3,4,6);

break;}
	}
	}
	else if(num[h]>20)
{        ad.dispques(num[h]);
}
	h++;}
	gotoxy(20,10);

	initgraph(&driver,&mode,"\\TC\\BGI");           //2 compulsory questions
	outtextxy(10,95,"14.How many triangles are there ?");
	rectangle(280,210,100,130);
	line(220,210,220,130);
	line(160,210,160,130);
	line(220,130,100,210);
	line(220,210,100,130);
	line(100,170,280, 170);
	line(220,130,280,170);
	line(280,170,220,210);
	outtextxy(50,250,"A.12");
	outtextxy(250,250,"B.24");
	outtextxy(50,280,"C.25");
	outtextxy(250,280,"D.20");

	R.res(3,6,10,4);
	closegraph();

	gotoxy(20,10);


	initgraph(&driver,&mode,"\\TC\\BGI");
	outtextxy(10,40,"15.Given below is a network .");
	outtextxy(10,50,"Points 1,2,etc. are called 'nodes' and lines joining them 'links'.");
	outtextxy(10,60,"is it possible to complete a full route of links WITHOUT REPEATING ANY LINK.");
	outtextxy(10,70,"We can repeat nodes.How shall we proceed?");
	rectangle(230,240,107,130);
       line(230,185,106,185);

       outtextxy(240,130,"2");

       outtextxy(240,240,"6");
       outtextxy(80,240,"5");
       outtextxy(80,130,"1");
       outtextxy(80,180,"3");
       outtextxy(240,180,"4");
	outtextxy(40,250,"A. start from any node");
	outtextxy(290,250,"B.start from nodes 1 or 2");
	outtextxy(40,280,"C.start from nodes 3 or 4");
	outtextxy(290,280,"D.not possible");
	R.res(4,6,10,3);

	closegraph();
	end=clock();
	t=(end-start)/CLK_TCK;
	t=t/60;
		R.res();
}
void RESULT::res()              //display result
		 {

		 if(C1.t<=16)total=total;        //consider time
		 else if(C1.t>16&&C1.t<20)total=total-2;
		 else if(C1.t>20)total=total-4;
			textcolor(GREEN);
			gotoxy(26,13);                                     //display time
			cout<<"\nDear "<<P.name<<","<<"\nYou took "<<C1.t<<" mins to complete the test";
			cout<<"\nYour calculated IQ is "<<total;
			cout<<"\nThe following has been concluded from your IQ score:-\n";
			if(total<=50)
			 {
			cout<<"\nExtremely Sorry!You are probably not fit for the test.";
			cout<<"\nYour IQ lies in the mentally retarded category.";
			}
			else if(total>50&&total<=55)
			cout<<"Severely challenged";
			else if(total>55&&total<60)
			cout<<"Challenged";
			else if(total>=60&&total<70)
			cout<<"Below average";
			else if(total >=70&&total<80)
			cout<<"Average";
			else if(total>=80&&total<100)
			cout<<"Above average";
			else if(total>=100&&total<130)
			cout<<"Gifted";
			else if(total>=130&&total<149)
			cout<<"Genius";
			else if(total>=149)
			cout<<"EXTRAORDINARILY GENIUS!THE WORLD NEEDS YOU AND YOUR SINCERE AND HELPFUL EFFORTS!YOU ARE BORN FOR A PURPOSE!";
getch();			    
 rec.record();
			 total=C1.t=0;
				M.display();
				

	cout<<"\t\t\tPRESS ANY KEY TO RETURN TO MAIN MENU.";
	getch();
	clrscr();
	M.menu();

		}
  fstream f1,f2,f3;

  void RECORD::record()
{
  f1.open("RECORD.dat",ios::app|ios::binary);         //storing record
  rec.rtotal=R.total;
 rec.rage=C1.age;
 strcpy(rec.rname,P.name);
 f1.write((char*)&rec,sizeof(rec));
 f1.close();


 f1.open("RECORD.dat",ios::in|ios::binary);
 while(f1.read((char*)&rec,sizeof(rec)))
 {
	if(strcmpi(P.name,rec.rname)==0)
	{
		 clrscr();
		 cout<<"\n\n\t\t\t\tYour Record\n\nName:"<<rec.rname<<"\n marks:"<<rec.rtotal;
		 getch();
	}
}
f1.close();



f1.open("RECORD.dat",ios::in|ios::binary);
while(f1.read((char*)&rec,sizeof(rec)))
 {
	f2.open("HIGHEST.dat",ios::in|ios::binary);
	f3.open("temp.dat",ios::out|ios::binary);
	f2.read((char*)&high1,sizeof(high1));
	if(rec.rtotal<high1.hfirst)
	{
		high2.hfirst=high1.hfirst;
		high2.hage1=high1.hage1;
		strcpy(high2.hname1,high1.hname1);

		if(rec.rtotal<high1.hsecond)
		{
			high2.hsecond=high1.hsecond;
			high2.hage2=high1.hage2;
			strcpy(high2.hname2,high1.hname2);

			if(rec.rtotal<high1.hthird)
			{
				high2.hthird=high1.hthird;
				high2.hage3=high1.hage3;
				strcpy(high2.hname3,high1.hname3);
			}
			else if(rec.rtotal>high1.hthird)
			{
				high2.hthird=rec.rtotal;
				high2.hage3=rec.rage;
				strcpy(high2.hname3,rec.rname);
			}

		}
		else if(rec.rtotal>high1.hsecond)
		{
			high2.hsecond=rec.rtotal;
			high2.hage2=rec.rage;
			strcpy(high2.hname2,rec.rname);
		}

      }
       else if(rec.rtotal>high1.hfirst)
	{
		high2.hfirst=rec.rtotal;
		high2.hage1=rec.rage;
		strcpy(high2.hname1,rec.rname);
	}
	f3.write((char*)&high2,sizeof(high2));
	f2.close();
	f3.close();
	remove("HIGHEST.dat");
	rename("temp.dat","HIGHEST.dat");
}
getch();
f1.close();
f2.close();
}

void highest::toppers()
{
	clrscr();
	cout<<"\n\t\t\t\t TOP 3 SCORES";
	cout<<"\n\n\tName\t\tAge\t\tScore";
	f2.open("HIGHEST.dat",ios::in|ios::binary);
	f2.read((char*)&high1,sizeof(high1));
	cout<<"\n\n1.\t"<<high1.hname1<<"\t\t"<<high1.hage1<<"\t\t"<<high1.hfirst;
	cout<<"\n\n2.\t"<<high1.hname2<<"\t\t"<<high1.hage2<<"\t\t"<<high1.hsecond;
	cout<<"\n\n3.\t"<<high1.hname3<<"\t\t"<<high1.hage3<<"\t\t"<<high1.hthird;
	M.display();
	cout<<"\t\t\tPRESS ANY KEY TO RETURN TO MAIN MENU.";
	getch();
	clrscr();
	M.menu();
}