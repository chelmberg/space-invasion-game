// Das Spiel Space Invasion Programmieren.
// Datum: 18.12.2012 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (void)
{

	int x=1;
	int zielStart=35;
	int zielEnde=45;

	_gotoxy(zielStart,1);
	printf("--->");
	_gotoxy(zielEnde,1);
	printf("<---");

	while(_kbhit() == 0)
	{
		for(int i=0;i<=90000000;i++)
		{
		}

		_gotoxy(x-1,25);
		printf(" ");

		if (x==80)
		{
			x=1;
		}
		_gotoxy(x,25);
		printf("|");

		x++;
	}
	if ( (x>=zielStart+4) && (x<=zielEnde) )
	{
		x--;
		_gotoxy(3,18);
		printf("TREFFER!!");
		for(int k=23;k>=1;k--)
		{
			_gotoxy(x,k);
			printf("^");
		}
	}
	else
	{
		x--;
		_gotoxy(3,18);
		printf("SAUFEN JUNGE");
		for(int k=23;k>=2;k--)
		{
			_gotoxy(x,k);
			printf("^");
		}
	}
	_gotoxy(3,20);
	system("Pause");

	return 0;
}
