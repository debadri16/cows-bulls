#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void cb(char n[50])
{int s=0,o[50],w[50],d=0,y,p=0;
ofstream fin("cbsave.txt",ios::app);
ifstream in("cbtwords.txt",ios::in);
con:
randomize();
y=random(69)+1;
char S,a[5];
char b[5];int l=0,c=0;char q[10];
cout<<"\nLET'S START\nPress any key";
cin>>S;
while(!in.eof())
	{
	in.getline(a,'\n');
	p++;
	if(p==y)
	break;
	}
in.close();
clrscr();
for(int x=1;x<=10;x++)
	{
	cout<<"\n\nEnter your guess of 4 letters  "<<"(guess number - "<<x<<")"<<"\n";
	gets(b);
	for(int i=0;i<4;i++)
		{
		if(b[i]==a[i])
		l++;
		else if(b[i]==a[0] || b[i]==a[1] || b[i]==a[2] || b[i]==a[3])
		c++;
		}
	cout<<c<<" cow/s "<<l<<" bull/s \n\n";
	if(l==4 && c==0)
		{
		cout<<"\nYou are right the word is--\n____________\n";
		cout<<"    "<<a[0]<<a[1]<<a[2]<<a[3];
		cout<<"\n____________\n";
		o[s]=x;
		w[s]=s+1;
		fin<<"turn - "<<w[s]<<" "<<"guesses - "<<o[s]<<"\n";
		char t;
		cout<<"\nTo play again press '1' or press any key to log out\n";
		cin>>t;
		if(t=='1')
			{s++;goto con;}
		else
		goto boot;
		}
	l=0;c=0;
	cout<<"press any letter to continue\n";
	cin>>q[x];
	clrscr();
	}
o[s]=11;
char t;
cout<<"\nOH DEAR!! YOU LOST!!\nYou had 10 guesses\n\nThe word was\n\n";
cout<<"    "<<a[0]<<a[1]<<a[2]<<a[3];
cout<<"\n\nPress 'x' to log out\n";
cin>>t;
boot:
fin<<n<<"\n";
ifstream fte("cbsave.txt",ios::in);
cout<<"\n\n PLAYER DETAILS\n_______________________________________________________________________\n";
int j=0;
while(j!=(s+1))
	{
	if(o[j]!=11)
		{
		d=d+(40-(4*(o[j]-1)));
		fte>>w[j];
		cout<<"   Turn number - "<<w[j];
		fte>>o[j];
		cout<<"     Number of guesses - "<<o[j]<<"     Points earned - "<<40-(4*(o[j]-1))<<"\n";
		cout<<"_______________________________________________________________________\n";
		}
	else
	cout<<"Lost in turn number - "<<s+1<<"\n";
	j++;
	}
fte.close();
fin<<"total points = "<<d<<"\n\n";
fin.close();
cout<<" TOTAL POINTS = "<<d<<"\n";
}

void pass(char z[20])
{
hell:
char f[30];int c=0;
cout<<"Log in to continue\n\nEnter your name\n";
gets(f);
cout<<"\n";
cout<<"Enter password\n";
for(int g=0;z[g-1]!=13;g++)
	{
	z[g]=getch();
	if(z[g]!=13)
	cout<<"*";
	}
if(z[0]=='s'&& z[1]=='t' && z[2]=='a' && z[3]=='r' && z[4]=='t')
	{
	clrscr();
	cout<<"WELCOME\n\nCOWS AND BULLS\n________________\n";
	puts(f);
	cout<<"\n_____________________________________________________________________________________\n";
	cout<<"\nRULES -\n  # I will think of a 4 letter unique word.\n  # Now you will have 10 chances to guess the word.\n  # You have to type several 4 letter unique words.\n";
	cout<<"  # Number of letters matched at same position will be termed as that number of 'BULLS'.\n  # If matched but not at same position, will be termed as that number of 'COWS'.\n";
	cout<<"  # I will show several combinations from which you have to identify the original word	\n";
	cout<<"\n_____________________________________________________________________________________\n";
	cb(f);
	cout<<"\nNAME - ";
	puts(f);
	cout<<"\n\nLOGGED OUT...\n";
	}
else
	{
	cout<<"\nSorry! The username or password entered is incorrect, please try again.\nPress '1' to continue or press any key to quit\n";
	cin>>c;
	cout<<"\n";
	if(c==1)
		{
		clrscr();
		goto hell;
		}
	}
}

void main()
{char p[100];
clrscr();
pass(p);
getch();
}
