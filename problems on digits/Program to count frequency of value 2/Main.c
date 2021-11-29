//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	3.Write a program which accept number from user and count frequency of 2 in it.
//	
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int main()
{
	auto int iValue = 0;
	printf ( " Enter Number : \n" );
	scanf ( "%d" , &iValue );
	
	
	
	int iFrequency = 0;
	 
	iFrequency = Frequency_Count_of_2 ( iValue );
	
	printf ( "%d \n" , iFrequency );
	
	

return 0;
}
