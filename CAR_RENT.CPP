#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void new_employ()
{

 clrscr();
 int n,m;
 char uname[20],pword[20];
 cout<<"\t########CREATE USERNAME AND PASSEWORD TO CONTINUE #######";
 cout<<"ENTER USERNAME WITHIN 14 LETTERS :--";
 gets(uname);
 n=strlen(uname);
 if(n>14)
 {
 cout<<"PLEASE ENTER USERNAME ACCORDING TO GIVEN CONDITION \n";
 delete(uname);
 cout<<"ENTER USERNAME WITHIN 14 LETTERS :--";
 gets(uname);
 }
 puts(uname);

 cout<<"ENTER PASSWORD WITHIN 14 LETTERS :--";
 gets(pword);
 m=strlen(uname);
 if(m>14)
 {
 cout<<"PLEASE ENTER USERNAME ACCORDING TO GIVEN CONDITION \n";
 delete(pword);
 cout<<"ENTER PASSWORD WITHIN 14 LETTERS :--";
 gets(pword);
 }
 puts(pword);

 getch();

}

void main()
{
 clrscr();
 char ch;
 do
 {
  cout<<"\t#############\t CAR RENTAL SYSTEM\t############\n";
  cout<<" PLEASE CHOOSE ONE OF THE FOLLOWING OPTIONS \n";
  cout<<"1.EMPLOY LOGIN \n";
  cout<<"2.RENT CAR \n";
  cout<<"3.RETURN CAR \n";
  cout<<"0.EXIT \n";
  cin>>ch;
  switch(ch)
  {
   case '1':cout<<"employ login\n";
	    char i;
	    do
	    {
	     cout<<" 1 NEW EMPLOY \n";
	     cout<<" 2 OLD EMPLOY \n";
	     cout<<" ENTER CHOICE";
	     cin>>i;
	     if (i=='0')
	     {
	     break ;
	     }
	     switch(i)
	     {
	      case '1': new_employ();
			break;
	      case '2': cout<<"old employ";
			break;
	      case '0': exit('0');
	     }
	    }while(i!=0);
	    break;
   case '2':cout<<"rent car";
	    break;
   case '3':cout<<"return car";
	    break;
   case '0':exit('0') ;
  }
 }while(ch!='0');
 getch();
}