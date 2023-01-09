#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void gotoxy(int x,int y);
void erase(int x,int y);
void printpacman(int x,int y);
char getCharAtxy(short int x,short int y);
int main()
{
	int pacmanX = 4;
	int pacmanY = 4;
	bool gameRunning = true;
	
	system("cls");
	printmaze();
	
	printpacman(pacmanX,pacmanY);
	while (gameRunning)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			char nextlocation = getCharAtxy(pacmanX-1,pacmanY);
			if (nextlocation ==' ')
			{
				erase(pacmanX,pacmanY);
				pacmanX = pacmanX -1;
				printpacman(pacmanX,pacmanY);
				
		    } 
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
		   	char nextlocation = getCharAtxy(pacmanX+1,pacmanY);
			if (nextlocation ==' ')
			{
				erase(pacmanX,pacmanY);
				pacmanX = pacmanX +1;
				printpacman(pacmanX,pacmanY);
		    }
		}
		
		
		if (GetAsyncKeyState(VK_UP))
			{
		   	char nextlocation = getCharAtxy(pacmanX,pacmanY-1);
			if (nextlocation ==' ')
			{
				erase(pacmanX,pacmanY);
				pacmanY = pacmanY -1;
				printpacman(pacmanX,pacmanY);
		    }
		}
		
			if (GetAsyncKeyState(VK_DOWN))
			{
		   	char nextlocation = getCharAtxy(pacmanX,pacmanY+1);
			if (nextlocation ==' ')
			{
				erase(pacmanX,pacmanY);
				pacmanY = pacmanY +1;
				printpacman(pacmanX,pacmanY);
		    }
		}
		    if (GetAsyncKeyState(VK_ESCAPE))
		    {
		    	gameRunning = false;
			}
		Sleep(300);
	}
}








void gotoxy(int x,int y)
{
 COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x,short int y)
{
	CHAR_INFO ci;
	COORD xy = {0,0};
	SMALL_RECT rect = {x,y,x,y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void erase(int x,int y)
{
	gotoxy(x,y);
	cout <<" ";
}
 void printpacman(int x,int y)
 {
 	gotoxy(x,y);
 	cout <<"P";
 }
 void printmaze()
 {
 	  system("cls");
  
cout <<"#####################################################################"   <<endl;
cout <<"||.. ...................................................  .......  ##"   <<endl;
cout <<"||.. %%%%%%%%%%%%%%               %%%%%%%%%%%%%%   |%|..   %%%%    ##"   <<endl;
cout <<"||..     |%|   |%|       |%|...   |%|        |%|   |%|..    |%|    ##"   <<endl;
cout <<"||..     |%|   |%|       |%|...   |%|        |%|   |%|..    |%|    ##"   <<endl;
cout <<"||..     %%%%%%%%    . . |%|...   %%%%%%%%%%%%%%      ..   %%%%..  ##"   <<endl;
cout <<"||..     |%|         . . |%|...  ............... |%|  ..        .  ##"   <<endl;
cout <<"||..     %%%%%%%%%%  . . |%|...  %%%%%%%%%%%%%   |%|  ..   %%%%%.  ##"   <<endl;
cout <<"||..              |%|. . |%|...  |%| ......      |%|  ..     |%|.  ##"   <<endl;
cout <<"||..    ........  |%|.           |%| ......|%|        ..     |%|.  ##"   <<endl;
cout <<"||..|%| |%|%%%|%|.|%|. |%|   P       ......|%|        .. |%| |%|.  ##"   <<endl;
cout <<"||..|%| |%|   |%|. .   %%%%%%%%%%%   ......|%|        .. |%|.      ##"   <<endl;  
cout <<"||..|%| |%|   |%|. .        ...|%|     %%%%%%%        .. |%|.      ##"   <<endl;
cout <<"||..|%|             .       ...|%|               |%|   . |%|.      ##"   <<endl;
cout <<"||..|%| %%%%%%%%%%          ...|%|%%%%%%%%%%%    |%|  .  |%|%%%%%% ##"   <<endl;
cout <<"||............................................   |%|  .............##"   <<endl;
cout <<"||..   .......................................            .........##"   <<endl;
cout <<"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  .....|%|  |%|  ..|%|        ##"   <<endl;
cout <<"||..|%|  |%|   |%|..           ...|%|    %%%%%%  |%|  ..|%|        ##"   <<endl;
cout <<"||..|%|            .    G      ...|%|            |%|  ..|%|        ##"   <<endl; 
cout <<"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%    |%|  ..|%|%%%%%%  ##"   <<endl;
cout <<"||............................................   |%|   ..........  ##"   <<endl;
cout <<"||..........................................              .......  ##"   <<endl;
cout <<"######################################################################"  <<endl;
 }
