/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// 2. Write a program which accept string from user and count number of small characters
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases
	
	IN : Marvellous
	Out : 9
*/

#include <stdio.h>

int CntLowerCase( char *str )
{
	int iLCCnt = 0;
	if ( str == NULL )
	{
		return 0;
	}
	
	while ( *str != 0 )
	{
		if ( *str >= 'a' && *str <= 'z' )
		{
			iLCCnt++;
		}
		str++;
	}
	
	return iLCCnt;
}

int main()
{
	char Arr[20]; int iRet = 0;
	printf ("Enter String : ");
	scanf ( "%[^'\n']s" , Arr );
	
	iRet = CntLowerCase ( Arr );
	printf ( "\n Entered String is : %s \n" , Arr );
	printf ( " Lower Case count is :  %d " , iRet );
	

return 0;
}
