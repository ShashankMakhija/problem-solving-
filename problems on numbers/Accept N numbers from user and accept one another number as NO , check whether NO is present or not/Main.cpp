///////////////////////////////////////////////////////////////////////
//
// 1. Accept N numbers from user and accept one another number as NO , check whether NO is present or not.
//
//////////////////////////////////////////////////////////////////////

/*
	Input :
	N : 6
	NO: 66
	Elements : 85 66 3 66 93 88
	Output : TRUE 
	
	Input : N : 6 11 3 15 11 111
	NO: 12
	Elements : 85
	Output : FALSE
	
*/

#include <iostream>
using namespace std;

class Array
{
	int *Arr;
	int iLength;

public:
	
	Array( int iLength )
	{
		Arr = new int [ iLength ];
		this -> iLength = iLength;
	}
	
	void Accept ()
	{
		for ( int iCnt = 0 ; iCnt < iLength ; iCnt++ )
		{
			cin >> Arr[iCnt] ;
		}
	}
	
	bool ChkNO ( int NO ) 
	{
		for ( int i = 0; i  < iLength ; i++ )
		{
			if ( Arr[i] == NO )
			{
				return true;
			}
		}
		return false;
	}

};

int main()
{
	int NO = 0; int iLength = 0; bool bRet = false;
	
	cout << "Enter Number of elements : " << endl;
	cin >> iLength;
	
	Array *obj = new Array( iLength );
	
	obj -> Accept();
	
	cout << "Enter NO to check weather its present or not" << endl;
	cin >> NO;
	bRet = obj -> ChkNO ( NO );
	if ( bRet == true )
	{
		cout << "TRUE\n";
	}
	else
	{
		cout << "FALSE\n";
	} 	
	
	return 0;
}


















