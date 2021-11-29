///////////////////////////////////////////////////////////////////////////////////////////////
//
// 	Function Name :  DisplayRange 
//	Input :          Integer , Integer
//	Output :         
//	Description :    Function to display number from user given range
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
		- print numbers from start number to end using while loop
		- continue loop untill end rumber not reached
		- Exit loop if condition Not matched ( exceds end number )
		- Return control to main
	
	END
*/

/*
 
 Test Cases :
 
	Input : 23 35
	Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
	
	Input : 10 18
	Output : 10 11 12 13 14 15 16 17 18
	
	Input : 10 10
	Output : 10
	
	Input : -10 2
	Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
	
	Input : 90 18
	Output : Invalid range
*/

#include "Header.h"

void DisplayRange
(
	int StartNum,		// StartNum Variable to store first element of range
	int EndNum			// EndNum V Variable to store end element of range
)
{
	if ( StartNum > EndNum )		// Filter : if first number is greater than second return : "Invalid Range"
	{
		printf ( "Invalid Range" );	
	}	
	
	register int iCnt = StartNum ;		// iCnt to traverse range from start to end
	
	while ( iCnt <= EndNum )	// while loop untill end num reached 
	{
		printf ( " %d" , iCnt );
		iCnt++;
	}
	
printf ("\n");
}





























