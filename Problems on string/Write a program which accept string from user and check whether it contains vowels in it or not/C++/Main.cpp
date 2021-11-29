/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	4. Write a program which accept string from user and check whether it contains vowels in it or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class StringX
{	

public:

	bool chkVowel( char *str )
	{
		int iLength = ( sizeof(str) / sizeof( str[0] ) );
		int i = 0;
		for (  i = 0 ; i < iLength ; i++ )
		{
			if ( (str[i] == 'a') || (str[i]== 'A') || 
				(str[i] == 'e') || (str[i]== 'E') ||
				(str[i] == 'i') || (str[i]== 'I') ||
				(str[i] == 'o') || (str[i]== 'O') ||
				(str[i] == 'u') || (str[i]== 'U') 
				
				)
			{
				break;
			}
		}
		if( i == iLength )
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
};

int main()
{
	char cArr[30] = {'\0'}; 
	bool bRet = false;
	
	cout << "Enter String" ;
	cin >> cArr;
	
	StringX *string = new StringX(  );
	
	bRet = string -> chkVowel(cArr);
	
	if( bRet == true )
	{
		cout << "TRUE" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
	return 0;
}

