/////////////////////////////////////////////////////////////////////////////////////////
//
// 2. Accept Character from user and check whether it is capital or not (A-Z).
//
///////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	
	Input : F
	Output : TRUE
	
	Input : d
	Output : FALSE

*/

#include <stdio.h>
#include <stdbool.h>

bool CheckCapital ( char ch )
{
	if ( ch >= 'A' && ch <= 'Z' )
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
	
	bRet = CheckCapital ( ch ) ;
	
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
