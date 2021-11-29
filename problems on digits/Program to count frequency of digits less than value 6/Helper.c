///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :    FrqCountLessThan_6
//	Input :            Integer
//	Output :           Integer
// 	Description :      Fuction to count digits in a number which are smaller than 6
//	Author :           Shashank Rajesh Makhija
//	RID :              Shashank_LB194
//	Date :             14 / 9 / 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


/*

Algorithm:
	START
	
	- Accept number from user
	- iCnt variable to keep count of frequency 
	- while loop | condition : iNo != 0
		- iNo % 10 to get the remainder and store it in iDigit
		- we check if iDigit is less than 6 
			- if yes | increase count in iCnt
		- iNo divided by 10 (NOT in float) to get rid to units place value | eg: 123 /10 = 12
	- Exit loop ( Condition level reached )
	
	END
*/

/*
Test Cases :

	Input : 2395
	Output : 3
	
	Input : 1018
	Output : 3
	
	Input : 9440
	Output : 3
	
	Input : 96672
	Output : 1

*/

int FrqCountLessThan_6 ( int iNo )	// Accept user number
{
	auto int iDigit = 0;				// Variavle to store digit
	auto int iCnt = 0;					// to keep count of value '4'
	
	
	if ( iNo == 0 )						// Filter 
	{
		return 1;
	}
	
	while ( iNo != 0 )					// loop untill iNo is 0 or less than 0
	{
		iDigit = iNo % 10;			
		
		if ( iDigit < 6 )				// if iDigit is less than 6 
		{
			iCnt++;						// increase count of digits
		}
		
		iNo = iNo / 10;
	}
	
return iCnt;						// return count of 4's to main

}





















