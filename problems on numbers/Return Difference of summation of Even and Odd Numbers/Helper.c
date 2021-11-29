/////////////////////////////////////////////////////////////////////////
//
// Function Name :         Difference
// Function Description :  Return Difference of summation of Even and Odd Numbers
// Input :                 Integer , Integer Pointer
// Output :                Integer
// Author Name :           Shashank Makhija
// RID :                   Shashank_LB194
//
///////////////////////////////////////////////////////////////////////////


/*
Test Case :

N : 6

Elements :85 66 3 80 93 88

Output : 53 (234 - 181)

*/
#include "Header.h"
int Difference ( int iSize , int *Arr )
{
	//int iDiff = 0;
	int iEvenSum = 0;
	int iOddSum = 0;
	int iCnt = 0;
	
	for ( iCnt ; iCnt < iSize ; iCnt++ )
	{
		if ( ( Arr[iCnt] % 2 ) == 0 )
		{
			iEvenSum = iEvenSum + Arr[iCnt];
		}
		
		else
		{
			iOddSum += Arr[iCnt];
		}
	}
	
	
return ( iEvenSum - iOddSum );
}
