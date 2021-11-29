//////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :    CheckZero
//	Input :            Integer
// 	output :           Boolean
//	Description :      Function Check if '0' is there or not
//	Author :           Shashank Rajesh Makhija
// 	RID :              Shashank_LB194
// 	Date :             14/9/21
//
/////////////////////////////////////////////////////////////////////////////////////////

/*

Algorithm:
	
	START
	
	- Accept number from user.
	- we use while loop 
		- run loop untill iNo > 0 
		- we do iNo % 10 and store that value(remainder) in variable iDigit
		- check if iDigit == 0 
			- if yes return true to main
			- else continue loop
		- ( Condition ilimit reached) Exit loop
	- return false to main 
	
	END

*/ 


/*
Test Cases:
	
	Input : 2395
	Output : There is no Zero
	
	Input : 1018
	Output : It Contains Zero
	
	Input : 9000
	Output : It Contains Zero
	
	Input : 10687
	Output : It Contains Zero
		
*/

#include "Header.h"

bool CheckZero( 
				int iNo  // Accept Number 
			  )
{
	auto int iDigit = 0;
	
	while ( iNo > 0 )
	{
		iDigit = iNo % 10;
		
		if ( iDigit == 0 )
		{
			return true;
		}
		
		iNo = iNo / 10;
	}
	
	return false;
}			  
	
	

























