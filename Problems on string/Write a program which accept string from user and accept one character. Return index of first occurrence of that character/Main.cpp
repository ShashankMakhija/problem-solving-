//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 3.Write a program which accept string from user and accept one character. Return index of first occurrence of that character.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	
	Input :
	Output :
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
		if ( Arr == NULL )
		{
			return ;
		}
		cout << "Enter String " << endl;
		cin.getline( Arr , 30 );
	}
	
	void Display ()
	{
		cout << Arr << endl;
	}
	
	unsigned int strlenX( )
	{
		unsigned int iLength = 0;
		while ( *Arr != '\0' )
		{
			iLength++;
		}
		return iLength ;
	}
	
	int FirstOccurance ( char ch )
	{
		int iCnt = -1;
		
		for ( int i = 0 ; Arr [i] != '\0' ; i++ )
		{
			if ( Arr[i] == ch )
			{
				iCnt = i;
				break;
			}
		}
		return iCnt;
	}	
};

int main()
{
	char Arr[30]; int iRet = 0; char ch = '\0';
	stringX *StrObj = new stringX( Arr );
	(*StrObj).Accept();
	
	cout << "Enter Char :" << endl;
	cin >> ch;
	iRet = StrObj -> FirstOccurance ( ch );
	
	cout << iRet << endl;

return 0;
}
