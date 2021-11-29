/////////////////////////////////////////////////////////////////////////
//
// Function Name :         DivisibleBy5
// Function Description :  Numbers Divisible by 5
// Input :                 Integer , Integer Pointer
// Output :                Integer
// Author Name :           Shashank Makhija
// RID :                   Shashank_LB194
//
///////////////////////////////////////////////////////////////////////////
/*
	
Input : N : 6

Elements :85 66 3 80 93 88

Output : 85 80

*/
#include "Header.h"

Array :: Array ( int iSize = 10 )
{
	this -> iSize = iSize;
	Arr = new int [ iSize ] ;
}

Array :: ~Array()
{
	delete []Arr;
}
	
void Array :: Accept ()
{
	int iCnt = 0;
		
	for ( iCnt ; iCnt < iSize ; iCnt++ )
	{
		cin >> Arr[ iCnt ];
	}
}

void Array :: DivisibleBy5 ()
{	
	cout << "Numbers Divisible by 5 are : " << endl;
	for ( int iCnt = 0 ; iCnt < iSize ; iCnt++ )
	{
		if ( ( Arr[iCnt] % 5 ) == 0 )
		{
			cout << Arr[iCnt] <<"\t";
		}
	}
	cout << endl;
}
