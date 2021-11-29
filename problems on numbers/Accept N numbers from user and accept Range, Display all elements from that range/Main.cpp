////////////////////////////////////////////////////////////////////////////////////////
//
//  4. Accept N numbers from user and accept Range, Display all elements from that range .
//
////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	Input :
	N : 6
	Start: 60
	End : 90
	Elements : 85 66 3 76 93 88
	O./p : 66 76 88
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
	
	void DisplayInRange( int iStart , int iEnd )
	{
		cout << "Elements in Range are :  " ;
		for ( int iCnt = 0 ; iCnt < iSize ; iCnt++ )
		{
			if ( Arr[iCnt] > iStart && Arr[iCnt] < iEnd )
			{
				cout << Arr[iCnt] << "\t";
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
	
	Array *obj = new Array ( iSize );
	
	obj -> Accept();
	
	int iStart = 0; int iEnd = 0;
	cout << "Enter Starting an ending Range : " ;
	cin >> iStart >> iEnd;
	obj -> DisplayInRange( iStart , iEnd );
	
	delete obj;
return 0;
}









