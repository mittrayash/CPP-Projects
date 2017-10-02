#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

using namespace std;






void Board();
void PlayerX();
void PlayerO();
void Player_win();
void check();
int win=0,wrong_X=0,wrong_O=0,chk=0;

char name_X[30];
char name_O[30];
int pos_for_X[3][3];
int pos_for_O[3][3];
int pos_marked[3][3];

int main()
{
	int i,ch,j;
	char ans;
/*	clrscr();
	cout<<"\n\t\t\t\tTIC TAC TOE";

	for(i=1;i<=11;i++)
	{
		delay(100);
		cout<<"*";
	}*/
	do
	{

		cout<<"\n\t\t\t\tTIC TAC TOE";
		cout<<"\n\t\t\t\t";
		for(i=1;i<=11;i++)
		{
			//delay(10000);
			cout<<"*";
		}
		cout<<"\n1.Start The Game";
		cout<<"\n2.Quit The Game";
		cout<<"\nEnter your choice(1-2) : ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				chk=0;
				win=0;
				for(i=1;i<=3;i++)
				{
					for(j=1;j<=3;j++)
					{
						pos_for_X[i][j]=0;
						pos_for_O[i][j]=0;
						pos_marked[i][j]=0;
					}
				}
				cout<<"\n\n";

				cout<<"\nEnter the name of the player playing for \'X\': ";

				gets(name_X);
				cout<<"\nEnter the name of the player playing for \'O\': ";

				gets(name_O);
				Board();
				for(;;)
				{
					if(win==1)
						break;
					check();
					if(chk==9)
					{
						cout<<"\n\t\t\tMATCH DRAWS!!";
						cout<<"\nPress any key....";
						main();
						break;
					}
					else
						chk=0;
					cout<<"\nTURN FOR " << name_X << " :";
					PlayerX();
					do
					{
						if(wrong_X!=1)
							break;
						wrong_X=0;
						cout<<"\nTURN FOR " << name_X << " :";
						PlayerX();
					}while(wrong_X==1);
					check();
					if(chk==9)
					{
						cout<<"\n\t\t\tMATCH DRAWS";
						cout<<"\nPress any key....";
						main();
						break;
					}
					else
						chk=0;
						cout<<"\nTURN FOR " << name_O << " :";
					PlayerO();
					do
					{
						if(wrong_O!=1)
							break;
						wrong_O=0;

						cout<<"\nTURN FOR "<< name_O <<" :";
						PlayerO();
					}while(wrong_O==1);

					}
				Board();
				if(win!=1)
				{
					cout<<"\n\t\t\tMATCH DRAWS!!";
					cout<<"\nPress any key.......";
					main();
				}
				getche();
				break;
			case 2:
				cout<<"\n\n\n\t\t\tThank You For Playing The Game.";
				cout<<"\n\t\t\t###############################";
				getche();
				exit(1);
				break;
		}
		cout<<"\nWant To Play(Y/N) ? ";
		fflush(stdin);
		cin >> ans;
	}while(ans=='y' || ans=='Y');
	return 0;
}


void Board()
{
	int i,j;
	cout<<"\n\t\t\t\tTIC TAC TOE BOARD";
	cout<<"\n\t\t\t\t*****************";
	cout<<"\n\n\n";
	cout<<"\n\t\t\t    1\t      2\t        3";
	for(i=1;i<=3;i++)
	{
		cout<<"\n \t\t\t______________________________";
		cout<<"\n \t\t\t|\t  |\t   |\t     |";
		cout<<"\n\t\t " << i << "\t";
		for(j=1;j<=3;j++)
		{

			if(pos_for_X[i][j]==1)
			{
				cout<<"    X";
				cout<<"     ";
			}
			else if(pos_for_O[i][j]==1)
			{
				cout<<"    O";
				cout<<"     ";
			}
			else
			{
				cout<<"          ";
				continue;
			}
		}
		cout<<"\n\t\t\t|\t  |\t   |\t     |";
	}
	cout<<"\n\t\t\t______________________________";
	Player_win();
}


void PlayerX()
{
	int row,col;
	//if(win==1)

	cout<<"\nEnter the row no. : ";

	cin >>row;
	cout<<"Enter the column no. : ";

	cin >> col;
	if(pos_marked[row][col]==1 || row<1 || row>3 || col<1 || col>3)
	{
		cout<<"\nWRONG POSITION!!" << endl;
		wrong_X=1;
		cout << "Enter any character to try again!"<< endl;
		getche();
		PlayerX();
	}
	else
	{
		pos_for_X[row][col]=1;
		pos_marked[row][col]=1;
		Board();
	}
}
void PlayerO()
{
	int row,col;
	//if(win==1)

	cout<<"\nEnter the row no. : ";
	cin >>row;
	cout<<"Enter the column no. : ";
	cin >> col;
	if(pos_marked[row][col]==1 || row<1 || row>3 || col<1 || col>3)
	{
		cout<<"\nWRONG POSITION!!" << endl;
		wrong_O = 1;
		cout << "Enter any character to try again!"<< endl;
		getche();
		PlayerO();
	}
	else
	{
		pos_for_O[row][col]=1;
		pos_marked[row][col]=1;
		Board();
	}
}
void Player_win()
{
	int i;
	for(i=1;i<=3;i++)
	{
		if(pos_for_X[i][1]==1 && pos_for_X[i][2]==1 && pos_for_X[i][3]==1)
		{
			win=1;
			cout<<"\n\nRESULT: " << name_X  << " wins!!" << endl;
			cout<<"\nPress any key............";
			getche();
			main();

		}
	}
	for(i=1;i<=3;i++)
	{
		if(pos_for_X[1][i]==1 && pos_for_X[2][i]==1 && pos_for_X[3][i]==1)
		{
			win=1;
			cout<<"\n\nRESULT: " << name_X << "wins!!" << endl;
			cout<<"\nPress any key............";
			getche();
            main();
		}
	}
	if(pos_for_X[1][1]==1 && pos_for_X[2][2]==1 && pos_for_X[3][3]==1)
	{
		win=1;
		cout<<"\n\nRESULTL: " << name_X << "wins!!" << endl;
		cout<<"\nPress any key......";
		getche();
        main();
	}
	else if(pos_for_X[1][3]==1 && pos_for_X[2][2]==1 &&
pos_for_X[3][1]==1)
	{
        	win=1;
		cout<<"\n\nRESULT: " << name_X << "wins!!" << endl;
                cout<<"\nPress any key.....";
                getche();
        main();
	}

        for(i=1;i<=3;i++)
	{
		if(pos_for_O[i][1]==1 && pos_for_O[i][2]==1 && pos_for_O[i][3]==1)
		{
			win=1;
			cout<<"\n\nRESULT: " << name_O << "wins!!" << endl;
                        cout<<"\nPress any key.....";
                        getche();
        main();
		}
	}
	for(i=1;i<=3;i++)
	{
		if(pos_for_O[1][i]==1 && pos_for_O[2][i]==1 && pos_for_O[3][i]==1)
		{
			win=1;
			cout<<"\n\nRESULT: " << name_O << "wins!!";
                        cout<<"\nPress any key.....";
            main();
		}
	}
	if(pos_for_O[1][1]==1 && pos_for_O[2][2]==1 && pos_for_O[3][3]==1)
	{
		win=1;
		cout<<"\n\nRESULT: " << name_O << " wins!!" ;
		cout<<"\nPress any key.....";
		getche();
        main();
	}
	else if(pos_for_O[1][3]==1 && pos_for_O[2][2]==1 &&
pos_for_O[3][1]==1)
	{
        	win=1;
		cout<<"\n\nRESULT: " << name_O << " wins";
                cout<<"\nPress any key.....";
                getche();
        main();
	}
}
void check()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(pos_marked[i][j]==1)
				chk++;
			else
				continue;
		}
	}
}
