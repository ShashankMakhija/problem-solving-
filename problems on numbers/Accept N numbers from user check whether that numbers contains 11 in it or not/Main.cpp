////////////////////////////////////////////////////////////////////////////////////////
//
//  3. Accept N numbers from user check whether that numbers contains 11 in it or not.
//
////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	Input : N : 6
	Elements :85 66 11 80 93 88
	Output : 11 is present

	Input : N : 6
	Elements :85 66 3 80 93 88
	Output : 11 is absent
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
	
	bool CheckValue11()
	{
		for ( int iCnt = 0 ; iCnt < iSize ; iCnt++ )
		{
			if ( Arr[iCnt] == 11 )
			{
				return true;
			}
		}
		return false;
	}
	
};

int main ()
{
	int iSize = 0;
	cout << "Enter number of elements you want to enter :" << endl;
	cin >> iSize;
	
	Array *obj = new Array ( iSize );
	
	obj -> Accept();
	bool bRet = obj -> CheckValue11();
	
	if ( bRet == true )
	{
		cout << "11 is Present" << endl;
	}
	else 
	{
		cout << " 11  is ABSENT " << endl;
	}
	
return 0;
}









