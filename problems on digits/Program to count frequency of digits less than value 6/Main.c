//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	5.Write a program which accept number from user and count frequency of digits less than 6
//	
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int main()
{
	auto int iValue = 0;
	printf ( " Enter Number : \n" );
	scanf ( "%d" , &iValue );
	
	
	
	auto int iFrequency = 0;
	 
	iFrequency = FrqCountLessThan_6 ( iValue );
	
	printf ( "%d \n" , iFrequency );
	
	

return 0;
}
