////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :    CountEven
// Input :            Integer
// Output :           INteger
// Description :      Function to return count of even digits in a number
// Author :           Shashank Rajesh Makhija
// RID :              Shashank_LB194
// Date :             14 / 9 / 2021
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Algorithm:

	START
	
	- Accept number from user 
	- update number to positive if input is negative
	- while loop untill iNo is less than or equal to 0
		- perform iNo % 10 to get the digit and store it in iDigit variable
		- check if iDigit is even or not 
		- if yes | increase count of even digits in variable iCnt
		- divide iNo by 10 at each iteration to get rid of units place in number (not in float) eg: 777 / 10 = 77
	- exit loop 
	
	END
*/	

/*
Test Cases :

	Input : 2395
	Output : 1
	
	Input : 1018
	Output : 2
	
	Input : -1018
	Output : 2
	
	Input : 8462
	Output : 4
*/

int CountEven ( int iNo )
{
	auto int iDigit = 0;	// iDigit variable to indivisual digits of number
	auto int iCnt = 0;		// counter variable to keep track of number of digits
	
	
	if ( iNo < 0 )  				// Input Updater
	{
		iNo = -iNo;					// convert negative value to positive  
	}
	
	if ( iNo == 0 )
	{
		return 1;
	}
	
	
	while ( iNo != 0 )			// loop untill iNo is not equal to 0
	{
		iDigit = iNo % 10 ;		
		
		if ( iDigit % 2 == 0 )	// if digit is even , increase count on iCnt
		{
			iCnt++;
		}
		
		iNo = iNo / 10;
	}

return iCnt;				// return count of even digits to main
}



















