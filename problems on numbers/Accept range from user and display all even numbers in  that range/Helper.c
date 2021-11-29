///////////////////////////////////////////////////////////////////////////////////////////////
//
// 	Function Name :  DisplayEvenRange 
//	Input :          Integer , Integer
//	Output :         
//	Description :    Function to display EVEN numbers from user given range
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
		- print only even numbers from start number to end using while loop
		- continue loop untill end rumber not reached
		- Exit loop if condition Not matched ( exceds end number )
		- Return control to main
	
	END
*/

/*
 
 Test Cases :
 
	Input : 23 35
	Output : 24 26 28 30 32 34
	
	Input : 10 18
	Output : 10 12 14 16 18
	
	Input : 10 10
	Output : 10
	
	Input : -10 2
	Output : -10 -8 -6 -4 -2 0 2
	
	Input : 90 18
	Output : Invalid range
*/

#include "Header.h"

void DisplayEvenRange
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
		if ( iCnt % 2 == 0 )	// display only even nos.
		{
			printf ( " %d" , iCnt );
		}
		
		iCnt++;
	}
	
printf ("\n");
}





























