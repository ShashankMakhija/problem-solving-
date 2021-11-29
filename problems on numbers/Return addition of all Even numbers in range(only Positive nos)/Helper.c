///////////////////////////////////////////////////////////////////////////////////////////////
//
// 	Function Name :  Addition_Even_In_Range 
//	Input :          Integer 
//	Output :         Integer
//	Description :    Function to display addition of Even numbers in user given range
//  Author Name :    Shashank Makhija 
// 	RID :            Shashank_LB194
//  Date :           19 / 09 / 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////

/*
 
 Test Cases :
 
	Input : 23 30
	Output : 108
	
	Input : 10 18
	Output : 70
	
	Input : -10 2
	Output : Invalid range
	
	Input : 90 18
	Output : Invalid range
*/

#include "Header.h"

int Addition_Even_In_Range
(
	int StartNum,		// StartNum Variable to store first element of range
	int EndNum			// EndNum V Variable to store end element of range
)
{
	
	if ( StartNum > EndNum )		// Filter : if first number is greater than second return : "Invalid Range"
	{
		printf ( "Invalid Range" );
		return 0;	
	}
	
	if ( StartNum < 0 || EndNum < 0 ) // Filter : if any value is negative return to main
	{
		printf ("Invalid Input");
		return 0;
	}	
	
	register int iCnt = StartNum ;		// iCnt to traverse range from start to end
	auto int iSum = 0;
	
	while ( iCnt <= EndNum )	// while loop untill end num reached 
	{
		if ( iCnt % 2 == 0 )
		{
			iSum = iSum + iCnt;		// store addition in Variable iSum if Even
		}
		iCnt++;
	}
	
return iSum;
}





























