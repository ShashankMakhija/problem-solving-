/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases
 MarvellouS
 
 6
*/

#include <stdio.h>

int Diff( char *str )
{
	int iLcCnt = 0; int iUcCnt = 0; // uppercase count and lower case count
	
	if ( str == NULL )
	{
		return 0;
	}
	
	while ( *str != 0 )
	{
		if ( *str >= 'A' && *str <= 'Z' )
		{
			iUcCnt++;
		}
		if ( *str >= 'a' && *str <= 'z' )
		{
			iLcCnt++;
		}
		str++;
	}
	
	return  iLcCnt-iUcCnt; // return Difference
}

int main()
{
	char Arr[20]; int iRet = 0;
	printf ("Enter String : ");
	scanf ( "%[^'\n']s" , Arr );
	
	iRet = Diff (Arr) ;
	printf ( "\n%d" , iRet );
	

return 0;
}
