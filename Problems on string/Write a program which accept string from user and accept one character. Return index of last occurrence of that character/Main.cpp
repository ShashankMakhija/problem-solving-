//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 4.Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	
	Input : Marvellous Multi OS
			M
	Output : 11
*/

#include <iostream>
using namespace std;

class stringX 
{
	char *Arr;
	
public:

	stringX(char *str)
	{
		Arr = str; 
	}
	
	void Accept ()
	{
		cout << "Enter String " << endl;
		cin.getline( Arr , 30 );
	}
	
	void Display ()
	{
		cout << Arr << endl;
	}
	
	int LastOccurance ( char ch )
	{
		int iIndex = -1;
		
		for ( int i = 0 ; Arr[i] != '\0' ; i++ )
		{
			if ( Arr [i] == ch )
			{
				iIndex = i;
			}
		}
		return iIndex ;
	}
};

int main()
{ 
	char Arr[30]; char ch = '\0'; int iIndex = 0;
	stringX *StrObj = new stringX( Arr );
	(*StrObj).Accept();
	
	cout << "Enter Char :" << endl;
	cin >> ch;
	
	iIndex = StrObj -> LastOccurance ( ch );
	
	cout << iIndex << endl ;
	
	delete StrObj;
	
return 0;
}
