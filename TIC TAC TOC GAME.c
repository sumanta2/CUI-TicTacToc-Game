#include<stdio.h>
#include<conio.h>
void display();
void module1(int value);
void module2(int value);
void module3(int value);
	int store[3][3]={{9,9,9},{9,9,9},{9,9,9}};
	int user=0;
int main()
{
	int i,j;
	printf("\t\t\t\t\t TIC TAC TOC GAME\n");
	printf("\t\t\t\t\t -=-=-=-=-=-=-=-=\n");
	rules();
	display();
	while(1)
	{
		//printf("Enter your values:");
		//scanf("%d",&store[i][j]);
		int temp;
		user=user%2;
		temp=user+1;
		printf("Input for %d no user\n",temp);
		user++;
		printf("Enter your Number of Rows:(press '7' for exit):: ");
		scanf("%d",&i);
		i=input(i);
		i--;
		if(i==6)
		{
			printf("exit. \nThank you for playing.");
			break;
		}
		printf("Enter you Number of Columns:(press '7' for exit):: ");
		scanf("%d",&j);
		j=input(j);
		j--;
		if(j==6)
		{
			printf("exit. \nThank you for playing.");
			printf("press Enter to clear this screen and exit.");
		getch();
			break;
		}
		store[i][j]=userCheck(i,j,temp);
		display();	
		check();
		drawCheck();
	}
	getch();
	return 0;
}
int userCheck(int i,int j,int temp)
{	
	if(store[i][j]!=1 && store[i][j]!=2)    //here == operation is not wprk inside if 
	{
		return temp;
	}
	else
	{
		printf("Alert!You cannot rewrite the data which already entered.\n");
		user--;
		return store[i][j];
	}
}
int input(int no)
{
	while((no!=1) && (no!=2) && (no!=3) && (no!=7))
	{	
		printf("You enter wrong input:plz enter 1,2,3 or 7.\nEnter your number:");
		scanf("%d",&no);	
	}
	return no;
}
void display()
{
	printf("GAMEBOARD:");
	printf("\n\t\t\t\t\t%d|%d|%d\n",store[0][0],store[0][1],store[0][2]);
	printf("\t\t\t\t\t-+-+-\n");
	printf("\t\t\t\t\t%d|%d|%d\n",store[1][0],store[1][1],store[1][2]);
	printf("\t\t\t\t\t-+-+-\n");
	printf("\t\t\t\t\t%d|%d|%d\n\n",store[2][0],store[2][1],store[2][2]);
}
void check(int i,int j)
{
	int value=store[i][j];
	if(i==0 && j==0)
	{
		module1(value);
		module2(value);
		module3(value);
	}
	else if(i==0 && j==1)
	{
		module2(value);
		module4(value);
	}
	else if(i==0 && j==2)
	{
		module2(value);
		module5(value);
		module6(value);
	}
	else if(i==1 && j==0)
	{
		module3(value);
		module7(value);
	}
	else if(i==1 && j==1)
	{
		module1(value);
		module4(value);
		module6(value);
		module7(value);
	}
	else if(i==1&&j==2)
	{
		module5(value);
		module7(value);
	}
	else if(i==2&&j==0)
	{
		module3(value);
		module6(value);
		module8(value);
	}
	else if(i==2&&j==1)
	{
		module4(value);
		module8(value);
	}
	else if(i==2&&j==2)  //else is not magnetary in 
	{
		module1(value);
		module5(value);
		module8(value);	
	}
}
void module1(int value)
{	
	if(store[0][0]==value&&store[1][1]==value&&store[2][2]==value)
	{
		printf("\t\t\t\tWOW!%d no player win this match\n",user);
		printf("press Enter to Exit.");
		getch();
		exit(0);
	}		
}
void module2(int value)
{
	if(store[0][0]==value&&store[0][1]==value&&store[0][2]==value)
	{
		printf("\t\t\t\tWOW!%d no player win this match\n",user);
		printf("press Enter to Exit.");
		getch();
		exit(0);
	}
}
void module3(int value)
{
	if(store[0][0]==value&&store[1][0]==value&&store[2][0]==value)
	{
		printf("\t\t\t\tWOW!%d no player win this match\n",user);	
		printf("press Enter to Exit.");
		getch();
		exit(0);
	}
}
void module4(int value)
{
	if(store[0][1]==value&&store[1][1]==value&&store[2][1]==value)
	{
		printf("\t\t\t\tWOW!%d no player win this match\n",user);
		printf("press Enter to Exit.");
		getch();
		exit(0);
	}
}
void module5(int value)
{
	if(store[0][2]==value&&store[1][2]==value&&store[2][2]==value)
	{
		printf("\t\t\t\tWOW!%d no player win this match\n",user);
		printf("press Enter to Exit.");
		getch();	
		exit(0);
	}
}
void module6(int value)
{
	if(store[0][2]==value&&store[1][1]==value&&store[2][0]==value)
	{
		printf("\t\t\t\tWOW!%d no player win this match\n",user);	
		printf("press Enter to Exit.");
		getch();
		exit(0);
	}
}
void module7(int value)
{
	if(store[1][0]==value&&store[1][1]==value&&store[1][2]==value)
	{
		printf("\t\t\t\tWOW!%d no player win this match\n",user);	
		printf("press Enter to Exit.");
		getch();
		exit(0);
	}
}
void module8(int value)
{
	if(store[2][0]==value&&store[2][1]==value&&store[2][2]==value)
	{
		printf("\t\t\t\tWOW!%d no player win this match\n",user);
		printf("press Enter to Exit.");
		getch();	
		exit(0);
	}
}
void drawCheck()
{
	if(store[0][0]==9||store[0][1]==9||store[0][2]==9||store[1][0]==9||store[1][1]==9||store[1][2]==9||store[2][0]==9||store[2][1]==9||store[2][2]==9)
	{
	}
	else
	{
		printf("The match are draw.\npress Enter to Exit");
		getch();
		exit(0);
	}	
}
void rules()
{
	printf("\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-RULES=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("\t\t-                    Only two user play this at a time.            -\n");
	printf("\t\t=      		    9 indicate blank space in gameboard.           =\n");
	printf("\t\t-      User cannot  overrwrite data which input previous time.     -\n");
	printf("\t\t=  User set input position by giving the value of row and column.  =\n");
	printf("\t\t-  System put 1 for first player and 2 for secoend player in that  -\n");
	printf("\t\t=  position  of GAMEBOARD which selected by the player.            =\n");
	printf("\t\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");	
}
