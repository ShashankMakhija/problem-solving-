///////////////////////////////////////////////////////////////////////////////////////////////
//
// 	Function Name :  Addition_In_Range 
//	Input :          Integer 
//	Output :         Integer
//	Description :    Function to display addition of numbers in user given range
//  Author Name :    Shashank Makhija 
// 	RID :            Shashank_LB194
//  Date :           19 / 09 / 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////


/*

Algorithm:

	START:
		- Accept 2 number from user
		- Filter : Check if first num is greater than second or not
			- if yes | return : "Invalid Input"
		- Filter : if any of the numbers are negative return : invalid range
		- return addition numbers from start number to end using while loop
		- continue loop untill end rumber not reached
		- Exit loop if condition Not matched ( exceds end number )
		- Return control to main
	
	END
*/

/*
 
 Test Cases :
 
	Input : 23 30
	Output : 212
	
	Input : 10 18
	Output : 126
	
	Input : -10 2
	Output : Invalid range
	
	Input : 90 18
	Output : Invalid range
*/

#include "Header.h"

int Addition_In_Range
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
		iSum = iSum + iCnt;		// store addition in Variable iSum
		iCnt++;
	}
	
return iSum;
}





























