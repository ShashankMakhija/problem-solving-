/////////////////////////////////////////////////////////////////////////////////////////
//
// 3 .Accept Character from user and check whether it is digit or not (0-9).
//
///////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	
	Input : 7
	Output : TRUE
	
	Input : d
	Output : FALSE

*/

#include <stdio.h>
#include <stdbool.h>

bool CheckDigit ( char ch )
{
	if ( ch >= '0' && ch <= '9' )
	{
		return true;
	}
	else
	{
		return false;
	}	
}

int main ()
{
	char ch = '\0'; bool bRet = false;
	printf ( " Enter Charcter :  " );
	scanf ( "%[^'\n']s" , &ch );
	
	bRet = CheckDigit ( ch ) ;
	
	if ( bRet == true )
	{
		printf ( "TRUE\n" );
	}
	else 
	{
		printf ( "False\n" );
	}

return 0;
}
