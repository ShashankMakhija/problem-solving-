////////////////////////////////////////////////////////////////////////////////////////
//
//  5. Accept N numbers from user and display all such elements which are multiples of 11.
//
////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :

	Input : N : 6
	Elements :85 66 3 55 93 88
	Output : 66 55 88

*/

#include <iostream>
using namespace std;

class Array
{
	int *Arr;
	int iSize;
	
public:
	
	Array (int iSize)
	{
		this -> iSize = iSize ;
		Arr = new int[ iSize ] ;
	}
	
	~Array ()
	{
		delete []Arr;
	}
	
	void Accept ()
	{
		cout << "Enter Elements in the Array :" << endl;
		
		for ( int iCnt = 0 ; iCnt < iSize ; iCnt++ )
		{
			cin >> Arr[ iCnt ];
		}
	}
	
	void MultipleOf11 ()
	{
		cout << " Multiples of 11 are : " << endl;
		int iRet = 0;
		
		for ( int iCnt = 0 ; iCnt < iSize ; iCnt++ )
		{
			if ( (Arr[ iCnt ] % 11 ) == 0 )
			{
				cout << Arr[ iCnt ] << "\t";
			}
		}
		cout << endl;
	}
};

int main ()
{
	int iSize = 0;
	cout << "Enter number of elements you want to enter :" << endl;
	cin >> iSize;
	
	Array obj( iSize ) ;
	
	obj.Accept();
	obj.MultipleOf11();
	
return 0;
}









