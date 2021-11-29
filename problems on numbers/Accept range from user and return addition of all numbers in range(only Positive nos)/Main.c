/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 	8.3.: 3. Write a program which accept range from user and return addition of all numbers in between that range. (Range should contains positive numbers only)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int main()
{
	
	auto int StartNum = 0;
	auto int EndNum = 0;
	auto int iRet = 0;
	
	printf("Enter Start and end number  : ");
	scanf ("%d%d" , &StartNum , &EndNum ) ;
	
	iRet = Addition_In_Range ( StartNum , EndNum );
	
	printf ("%d\n" , iRet );
	
	
return 0;
}
