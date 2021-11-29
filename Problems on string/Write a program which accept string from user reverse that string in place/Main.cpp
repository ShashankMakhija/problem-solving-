//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 5. Write a program which accept string from user reverse that string in place.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	
	Input : abcd
	Output : dcba
*/

#include <iostream>
using namespace std;

class stringX 
{
private:
	char *Arr;
	
public:

	stringX(char *str)
	{
		Arr = str; 
	}
	
	void Accept ()
	{
		cout << "Enter String " << endl;
		cin.getline ( Arr , 30 );
	}
	
	void Display ()
	{
		cout << Arr << endl;
	}
	
	int strlenX()
	{
		int iLength = 0;
		
		while ( *Arr != 0 )
		{
			iLength++;
			Arr++;
		}
		return iLength;
	}
	void strRevX( char *arr )
	{
		int Start = 0; 
		int iLength = this -> strlenX();
		int End = ( iLength - 1 );
		char cTemp = '\0';

		for ( Start , End ; Start <= End ; Start++,End-- )
		{
			cTemp = arr[End] ; 
			arr[End] = arr[Start];
			arr[Start] = cTemp;
					
		}
		
		//cout << endl << arr << endl ;
	}
};

int main()
{
	char Arr[30];
	stringX *StrObj = new stringX( Arr );
	(*StrObj).Accept();
	
	StrObj -> Display(); 
	
	StrObj -> strRevX( Arr );
	cout << Arr << endl;
	

return 0;
}
