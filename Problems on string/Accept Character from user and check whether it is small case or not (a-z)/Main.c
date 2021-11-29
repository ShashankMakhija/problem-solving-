/////////////////////////////////////////////////////////////////////////////////////////
//
// 4. Accept Character from user and check whether it is small case or not (a-z).
//
///////////////////////////////////////////////////////////////////////////////////////

/*
Test Cases :
	
	Input : g
	Output : TRUE
	
	Input : D
	Output : FALSE

*/

#include <stdio.h>
#include <stdbool.h>

bool CheckSmallCase ( char ch )
{
	if ( ch >= 'a' && ch <= 'z' )
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
	
	bRet = CheckSmallCase ( ch ) ;
	
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
