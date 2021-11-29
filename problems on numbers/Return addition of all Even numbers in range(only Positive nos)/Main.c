/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 	8.4.:Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)
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
	
	iRet = Addition_Even_In_Range ( StartNum , EndNum );
	
	printf ("%d\n" , iRet );
	
	
return 0;
}
