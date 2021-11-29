/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 8.2. Write a program which accept range from user and display all even numbers in between that range.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int main()
{
	
	auto int StartNum = 0;
	auto int EndNum = 0;
	
	printf("Enter Start and end number  : ");
	scanf ("%d%d" , &StartNum , &EndNum ) ;
	
	DisplayEvenRange ( StartNum , EndNum );
	
	
return 0;
}
