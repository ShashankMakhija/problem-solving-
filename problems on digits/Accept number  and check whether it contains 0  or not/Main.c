///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	2. Write a program which accept number from user and check whether it contains '0' or not.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "Header.h"

int main()
{
	auto int iValue = 0;
	auto bool bRet = 0;
	
	printf("Enter number :\n");
	scanf( "%d" , &iValue );
	
	bRet = CheckZero ( iValue );
	
	if( bRet == 1 )
	{
		printf ( "It Contains Zero\n" );
	}
	else
	{
		printf (" There is no Zero \n ");
	}
	
return 0;
}

