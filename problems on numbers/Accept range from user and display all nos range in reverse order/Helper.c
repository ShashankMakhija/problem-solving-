///////////////////////////////////////////////////////////////////////////////////////////////
//
// 	Function Name :  DisplayRangeRev 
//	Input :          Integer , Integer
//	Output :         
//	Description :    Function to display numbers from user given range in REVERSE
//  Author Name :    Shashank Makhija 
// 	RID :            Shashank_LB194
//  Date :           19 / 09 / 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////


/*
 
 Test Cases :
 
	Input : 23 35
	Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
	
	Input : 10 18
	Output : 18 17 16 15 14 13 12 11 10
	
	Input : 10 10
	Output : 10
	
	Input : -10 2
	Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
	
	Input : 90 18
	Output : Invalid range
*/

#include "Header.h"

void DisplayRangeRev
(
	int StartNum,		// StartNum Variable to store first element of range
	int EndNum			// EndNum  Variable to store end element of range
)
{
	if ( StartNum > EndNum )		// Filter : if first number is greater than second return : "Invalid Range"
	{
		printf ( "Invalid Range" );	
	}	
	
	register int iCnt = EndNum ;		// iCnt to traverse range
	
	while ( iCnt >= StartNum )	// while loop untill end num reached 
	{
		printf ( " %d" , iCnt );
		iCnt--;
	}
	
printf ("\n");
}





























