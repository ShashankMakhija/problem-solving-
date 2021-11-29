//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 1.Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
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
		cout << "Enter String " << endl;
		cin.getline (Arr,30);
	}
	
	void Display ()
	{
		cout << Arr << endl;
	}
	
	bool CheckChar ( char ch )
	{
		bool flag = false;
		while ( *Arr != '\0' )
		{
			if ( *Arr == ch )
			{
				flag = true;
				break;
			}
			Arr++;
		}
		return flag;
	}
};

int main()
{
	char Arr[30]; char ch = '\0'; bool bRet = false;
	stringX *StrObj = new stringX( Arr );
	(*StrObj).Accept();
	
	cout << "Enter Character" << endl;
	cin >> ch;
	
	bRet = StrObj -> CheckChar( ch );
	if ( bRet == true )
	{
		printf ("TRUE\n");
	}
	else
	{
		cout << "False" << endl;
	}
	

return 0;
}
