//////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :    DisplayDigitReverse
//	Input :            Integer
// 	output :				
//	Description :      Function to display the indivisual digits in reverse order
//	Author :           Shashank Rajesh Makhija
// 	RID :              Shashank_LB194
// 	Date :             14/9/2021
//
/////////////////////////////////////////////////////////////////////////////////////////

/*

Algorithm:
	
	START
	
	- Accept number from user.
	- we use while loop 
		- run loop untill iNo > 0 
		- we do iNo % 10 and store that value in variable iDigit
		- print value of iDigit at each iteration of the loop
		- ( Condition ilimit reached) Exit loop
	- return to main ( Return value: void ) 
	
	END

*/ 


/*
Test Cases:

	Input : 2395
	Output :
	5
	9
	3
	2
	
	Input : 1018
	Output : 
	8
	1
	0
	1
	
	Input : -1018
	Output : 
	8
	1
	0
	1
	
	Input : 9000
	Output : 
	0
	0
	0
	9
*/

#include "Header.h"

void DisplayDigitsReverse( 
						int iNo  // Accept Number 
						)
{
	auto int iDigit = 0;		// varibale to store remainder/digit 
	
	if ( iNo < 0 )				// input Updater 
	{
		iNo = -iNo;
	}
	
	if ( iNo == 0 )				// Filter
	{
		printf( "0\n" );
		return ;
	}
		
	while ( iNo > 0 )			// loop untill iNo is less than 0 
	{
		iDigit = iNo % 10;
		printf( "%d\n" , iDigit );	// print digits at each iteration
		iNo = iNo / 10 ;
	}
}

























