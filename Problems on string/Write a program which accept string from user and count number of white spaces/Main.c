////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  5. Write a program which accept string from user and count number of white spaces
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :

*/

#include <stdio.h>

int CountWtSpc ( char *str )
{
	int iCnt = 0;
	if ( str == NULL )
	{
		return -1;
	}
	
	while ( *str != '\0' )
	{
		if ( *str == ' ' )
		{
			iCnt++;
		}
		
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[51]; int iRet = 0;
	printf ("Enter String : ");
	scanf ( "%[^'\n']s" , Arr );
	
	iRet = CountWtSpc ( Arr );
	
	printf ( "\n%d\n" , iRet );

return 0;
}
