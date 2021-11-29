///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name :    Frequency_Count_of_2
//	Input :            Integer
//	Output :           Integer
// 	Description :      Fuction to count the number of ' 2 's in a number
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
		- we check if iDigit == 2 
			- if yes | increase count in iCnt
		- iNo divided by 10 (NOT in float) to get rid to units place value | eg: 123 /10 = 12
	- Exit loop ( Condition level reached )
	
	END
*/

/*
Test Cases :
	Input : 2395
	Output : 1
	
	Input : 1018
	Output : 0
	
	Input : 9000
	Output : 0
	
	Input : 922432
	Output : 3	

*/

int Frequency_Count_of_2 ( int iNo )	// Accept user number
{
	auto int iDigit = 0;				// Variavle to store digit
	auto int iCnt = 0;					// to keep count of value '2'
	
	while ( iNo != 0 )					// loop untill iNo is 0 or less than 0
	{
		iDigit = iNo % 10;			
		
		if ( iDigit == 2 )				// if iDigit is equal to 2
		{
			iCnt++;						// increase count of 2's
		}
		
		iNo = iNo / 10;
	}
	
return iCnt;						// return count of 2's to main

}





















