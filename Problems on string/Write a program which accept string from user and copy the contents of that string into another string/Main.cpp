//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 1.Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases : 
	
	In : Marvellous Multi OS
	Out :Marvellous Multi OS
	
*/
#include <iostream>
#include <string.h>

using namespace std;

class stringX 
{
	
	char *Arr;
	
public:

	stringX ()
	{
		
		Arr = new char[20];
	}
	
	~stringX()
	{
		cout << " Destructor " << endl;
		delete []Arr ;
	}
	
	void Accept (  )
	{
		cout << "Enter String : " ;
		cin.getline( Arr , 20 );
	}
	
	void Display ()
	{
		cout << Arr << endl;	
	}
	
	void strcpyX ( char *Dest )
	{
		int iLength = strlen( Arr );
	
		
		int i = 0;
		
		for ( i = 0 ; i < iLength ; i++ ) 
		{
			Dest[i] = Arr[i];
		}
		
	}
	

};

int main()
{
	stringX *obj = new stringX();
	
	
	obj->Accept();
	
	 char cpy[20] = { '\0' };
	
	
	obj -> strcpyX( cpy );
	cout << "new string after copy :  " << cpy << endl;
	
	delete obj ;
	
return 0;
}








